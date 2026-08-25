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

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    s+=s;
    int ans=0;
    int at=0;
    for(int i=0;i<n*2;i++) {
        if(s[i]=='1') at=0;
        else at++;
        ans=max(ans, at);
    }
   
    cout << ans<< '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}


// // author: sofwant || a6cenna

// #include <bits/stdc++.h>
// using namespace std;

// #define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
// #define ll long long
// #define pll pair<ll, ll>
// #define pii pair<int, int>
// #define fs first
// #define sc second
// #define pb push_back

// void solve() {
//     int n;cin>>n;
//     string s;cin>>s;
//     int ans=0;
//     bool all1=1;
//     for(int i=0;i<n;i++) if(s[i]=='0') all1=0;
//     if(all1) {
//         cout << 0 << '\n';
//         return;
//     }
//     int cnt=INT_MAX;
//     for(int d=1;d<n;d++) {
//         ans+=min(cnt, d);
//         string t="";
//         for(int i=n-min(cnt, d);i<n;i++) t+=s[i];
//         for(int i=0;i<n-min(cnt, d);i++) t+=s[i];
//         for(int i=0;i<n;i++) {
//             s[i]=(s[i]-'0'||t[i]-'0')+'0';
//         }
//         bool check=true;
//         // cout << s << "stes\n";
//         // cout << t << "tes\n";
//         int tmp=0;
//         for(int i=0;i<n;i++) {
//             if(s[i]=='0') {
//                 tmp++;
//                 check=false;
//             }
//             // cout << check << "dbg \n";
//         }
//         cnt=min(cnt,tmp);
//         if(check) {
//             cout << ans << '\n';
//             return;
//         }
//     }
// }

// int main() {
//     suffering_leaves_suffering_leaves

//     int t;
//     cin >> t;

//     while(t--) {
//         solve();
//     }
// }
