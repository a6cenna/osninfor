#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    int b[n];
    long long sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    map<int,int>p,q;

    int mx=0;
    for(int i=0;i<n;i++) {
        sum+=a[i]*1LL;
        p[a[i]]++;
        if(p[a[i]]>=2) {
            mx=max(mx, a[i]);
        }
        b[i]=mx;
        q[b[i]]++;
    }
    int occur=0;
    for(int i=0;i<n;i++) {
        if(q[b[i]]>1) {
            sum+=1LL*b[i]*(n-i);
            occur=b[i];
        }
        else {
            sum+=b[i]+1LL*occur*(n-i-1);
        }
    }

    cout << sum << '\n';
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
