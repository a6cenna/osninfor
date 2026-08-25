// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

const int maxw=1e6;
const int neginf=LLONG_MIN/2;

void solve() {
    int n,m;cin>>n>>m;
    vector<pii> a(n+1),b(m+1); // kekuatan, mim value
    int suma=0,sumb=0;
    for(int i=1;i<=n;i++) {
        cin>>a[i].fs>>a[i].sc;
        suma+=a[i].fs;
    }
    for(int i=1;i<=m;i++) {
        cin>>b[i].fs>>b[i].sc;
        sumb+=b[i].fs;
    }

    int batas=min(suma,sumb);
    vector<int> dpn(batas+5, neginf), dpm(batas+5, neginf);
    dpn[0]=dpm[0]=0;
    for(int i=1;i<=n;i++) {
        for(int j=batas;j>=1;j--) {
            if(j-a[i].fs>=0&&dpn[j-a[i].fs]!=neginf) dpn[j]=max(dpn[j], dpn[j-a[i].fs]+a[i].sc);
        }
    }
    for(int i=1;i<=m;i++) {
        for(int j=batas;j>=1;j--) {
            if(j-b[i].fs>=0&&dpm[j-b[i].fs]!=neginf) dpm[j]=max(dpm[j], dpm[j-b[i].fs]+b[i].sc);
        }
    }
    int ans=0;
    for(int i=1;i<=batas;i++) {
        if(dpn[i]!=neginf&&dpm[i]!=neginf)ans=max(ans, dpn[i]+dpm[i]);
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    int t;cin>>t;
    while(t--) solve();
}
