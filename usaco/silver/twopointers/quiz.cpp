#include <bits/stdc++.h>

using namespace std;

const int maxm= 1e5;

vector<int> factors[maxm + 1];

void factored() {
    for(int i=1;i<=1e5;i++) {
        for(int j=i;j<=1e5;j+=i) {
            factors[j].push_back(i);
        }
    }
}

void solve() {
    int n,m;cin>>n>>m;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        a.push_back({x, i});
    }
    sort(a.begin(), a.end());
    vector<int> freq(m+1, 0);
    long long count=0;
    long long ans=LLONG_MAX;
    int l=0;
    for(int r=0;r<n;r++) {
        for(auto x : factors[a[r].first]) {
            if(x>m) break;
            if(!freq[x]++) {
                count++;
            }
        }
        while(count==m) {
            long long temp=a[r].first-a[l].first;
            ans=min(temp, ans);
            for(auto x : factors[a[l].first]) {
                if(x>m) break;
                if(--freq[x]==0) count--;
            }
            l++;
        }
    }

    cout << (ans >= LLONG_MAX ? -1 : ans) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    factored();

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
