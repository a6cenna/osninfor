#include <bits/stdc++.h>

using namespace std;

int dp(int pos, const vector<int>& a, vector<int>& m) {
    if(pos>=a.size()) return 0;
    int best=INT_MIN;

    if(m[pos]!=-1) {
        return m[pos];
    }
    int score=a[pos];
    if(pos+a[pos]<a.size()) {
        score+=dp(pos+a[pos], a, m);
    } 

    m[pos] = score;
    
    return score;
}

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    vector<int> m(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int maxs=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxs=max(maxs, dp(i, a, m));
    }
    cout << maxs<<endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
