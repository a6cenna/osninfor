// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int N=1e3;

int par[N+5];
int g[N+5];
int root(int x) {
    if(par[x]==x) return x;
    return par[x]=root(par[x]);
}

void merge(int x,int y) {
    int a=root(x);
    int b=root(y);
    if(a==b) return;
    par[b]=a;
    g[a]+=g[b];
    g[b]=0;
}

void solve() {
    int n,d;cin>>n>>d;
    for(int i=1;i<=n;i++) {
        par[i]=i;
        g[i]=1;
    }
    g[0]=0;
    pii xy[d];
    for(int i=0;i<d;i++) cin>>xy[i].fs>>xy[i].sc;
    // for(int i=0;i<d;i++) {
    //     int x,y;cin>>x>>y;
    //     if(root(x)==y||root(y)==x) {
    //         int tempm=INT_MIN;
    //         int idx;
    //         for(int j=1;j<=n;j++) {
    //             if(root(j)!=root(x)) {
    //                 if(g[j]>tempm) {
    //                     tempm=g[j];
    //                     idx=j;
    //                 }
    //             }
    //         }
    //         if(tempm!=INT_MIN) {
    //             ans+=tempm;
    //             merge(x, idx);
    //         }
    //     }
    //     else {
    //         merge(x, y);
    //         for(int j=1;j<=n;j++) {
    //             ans=max(ans, g[j]);
    //         }
    //     }

    //     cout << ans-1 << '\n';
    // }
    for(int i=0;i<d;i++) {
        int ans=0;
        int group=1;
        for(int j=0;j<=i;j++) {
            if(root(xy[j].fs)==root(xy[j].sc)) group++;
            else merge(xy[j].fs, xy[j].sc);

            // if(xy[j].fs==1&&xy[j].sc==7) cout << g[xy[j].fs] << "dbgg\n";
        }
        // cout << g[0] << "test\n";
        sort(g, g+n+1, greater<int>());
        for(int k=0;k<group;k++) {
            ans+=g[k];
            if(k==group) ans--;
            // cout << g[k] << ":: \n";
        }
        // for(int j=0;j<n;j++) {
        //     cout << g[j] << " ";
        // }
        // cout << '\n';
        for(int j=1;j<=n;j++) {
            par[j]=j;
            g[j]=1;
        }      
        g[0]=0;
        cout << ans-1 << '\n'; 
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
