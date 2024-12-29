#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int l[n], r[n];
    vector<int> prefixsum(n*2+1, 0);
    vector<int> count(2*n+1, 0);
    for (int i = 0; i < n; i++)
    {
        cin>>l[i]>>r[i];
        if(l[i]==r[i]) {
            prefixsum[l[i]]=1;
            count[l[i]]++;
        }
    }
    
    for (int i = 1; i <= 2*n; i++)
    {
        prefixsum[i]+=prefixsum[i-1];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if(l[i]==r[i]) {
            ans.push_back(count[l[i]]==1 ? 1 : 0);
        }
        else {
            ans.push_back(prefixsum[r[i]]-prefixsum[l[i]-1]<r[i]-l[i]+1 ? 1 : 0);
        }
    }
    for(auto a:ans) {
        cout << a;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
