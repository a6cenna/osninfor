// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n,m,x,y;cin>>n>>m>>x>>y;
    int sum=0;
    int plusx=0,plusy=0;
    while(m--) {
        int t,k;cin>>t>>k;
        if(t==1) {
            int mn=min(abs(x-k), plusx);
            plusx-=mn;
            int sisa=abs(x-k)-mn;
            sum+=sisa;
            plusx=0;
            plusy+=sisa;
            x=k;
        }
        else {
            int mn=min(abs(y-k), plusy);
            plusy-=mn;
            int sisa=abs(y-k)-mn;
            sum+=sisa;
            plusy=0;
            plusx+=sisa;
            y=k;
        }
    }
    
    cout << sum << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}

// // war without reason

// #include <bits/stdc++.h>
// using namespace std;

// #define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
// #define ll long long
// #define pll pair<ll, ll>
// #define pii pair<int, int>
// #define fs first
// #define sc second
// #define pb push_back
// #define int ll

// void solve() {
//     int n,m,x,y;cin>>n>>m>>x>>y;
//     int sum=0;
//     vector<int> tipe1,tipe2,urutan(m);
//     for(int i=0;i<m;i++) {
//         int t,k;cin>>t>>k;
//         urutan[i]=t;
//         if(t==1) tipe1.pb(k);
//         else tipe2.pb(k);
//     }
//     int curx=0,cury=0;
//     for(int i=0;i<m;i++) {
//         if(urutan[i]==1) {
//             int k=tipe1[curx];
//             sum+=abs(k-x);
//             if(tipe2.size()==0||cury==tipe2.size()) {
//                 x=k;
//                 curx++;
//                 continue;
//             }
//             int mn=min(abs(tipe2[cury]-y), abs(k-x));
//             if(tipe2[cury]>y) {
//                 y+=mn;
//             }
//             else if(tipe2[cury]<y) {
//                 y-=mn;
//             }
//             curx++;
//             x=k;
//         }
//         else {
//             int k=tipe2[cury];
//             sum+=abs(k-y);
//             if(tipe1.size()==0||curx==tipe1.size()) {
//                 y=k;
//                 cury++;
//                 continue;
//             }
//             int mn=min(abs(tipe1[curx]-x), abs(k-y));
//             if(tipe1[curx]>x) {
//                 x+=mn;
//             }
//             else if(tipe1[curx]<x) {
//                 x-=mn;
//             }
//             cury++;
//             y=k;
//         }
//     }
    
//     cout << sum << '\n';
// }

// signed main() {
//     suffering_leaves_suffering_leaves

//     solve();
// }
