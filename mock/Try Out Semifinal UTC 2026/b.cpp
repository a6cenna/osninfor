#include <bits/stdc++.h>
using namespace std;

#define int long long
#define push_back pb
#define pii pair<int,int>
#define fs first
#define sc second

void solve() {
    int n;cin>>n;
    if(n==0) {
        int m;cin>>m;
        vector<int> b(m);
        for(int i=0;i<m;i++) cin>>b[i];
        int curod=1,curev=2;
        int ans=-1;
        if(b[0]==0) {
            ans=max(ans,curev);
            b[0]=curev;curev+=2;
        }
        else {
            ans=max(ans,curod);
            b[0]=curod;curod+=2;
        }
        for(int i=1;i<m;i++) {
            if(b[i]==0) {
                while(b[i-1]>curev) {
                    curev+=2;
                }
                ans=max(ans,curev);
                b[i]=curev;
                curev+=2;
            }
            else {
                while(b[i-1]>curod) {
                    curod+=2;
                }
                ans=max(ans,curod);
                b[i]=curod;
                curod+=2;
            }
        }

        cout << ans << '\n';
        return;
    }
    vector<int> a(n);
    bool ok=1;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]!=0) ok=0;
    }
    int m;cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    int curod=1,curev=2;
    int ans=-1;
    set<int> st;
    if(b[0]==0) {
        ans=max(ans,curev);
        st.insert(curev);
        b[0]=curev;curev+=2;
    }
    else {
        ans=max(ans,curod);
        st.insert(curod);
        b[0]=curod;curod+=2;
    }
    for(int i=1;i<m;i++) {
        if(b[i]==0) {
            while(b[i-1]>curev) {
                curev+=2;
            }
            ans=max(ans,curev);
            st.insert(curev);
            b[i]=curev;
            curev+=2;
        }
        else {
            while(b[i-1]>curod) {
                curod+=2;
            }
            ans=max(ans,curod);
            st.insert(curod);
            b[i]=curod;
            curod+=2;
        }
    }

    // yg a sekarang
    curod=1,curev=2;
    if(a[0]==0) {
        while(st.count(curev)) curev+=2;
        ans=max(ans,curev);
        a[0]=curev;curev+=2;
    }
    else {
        while(st.count(curod)) curod+=2;
        ans=max(ans,curod);
        a[0]=curod;curod+=2;
    }
    for(int i=1;i<n;i++) {
        if(a[i]==0) {
            while(a[i-1]>curev) {
                curev+=2;
            }
            while(st.count(curev)) curev+=2;
            ans=max(ans,curev);
            a[i]=curev;
            curev+=2;
        }
        else {
            while(a[i-1]>curod) {
                curod+=2;
            }
            while(st.count(curod)) curod+=2;
            ans=max(ans,curod);
            a[i]=curod;
            curod+=2;
        }
    }

    // for(auto x:b) {
    //     cout << x << " ";
    // }
    // cout << '\n';
    cout << ans << '\n';
    return;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
