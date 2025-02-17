#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n,m;cin>>n>>m;
    long long a[n][m];
    vector<pair<long long, long long>> v;
    for(long long i=0;i<n;i++) {
        // long long curr=0;
        long long sum=0;
        for(long long j=0;j<m;j++) {
            cin>>a[i][j];
            sum+=a[i][j];
            // curr+=sum;
            // cout << curr << " db \n";
        }
        v.push_back(make_pair(sum, i));
    }
    sort(v.begin(), v.end(), [](pair<long long,long long> &a, pair<long long,long long> &b) {
        return a.first < b.first;
    });
    long long ans=0;
    long long curr=0;
    for(long long i=n-1;i>=0;i--) {
        for(long long j=0;j<m;j++) {
            curr+=a[v[i].second][j];
            ans+=curr;
        }
    }
    cout << ans << '\n';
    // if(ans==39) cout << v[1].first << " db";
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


// #include <bits/stdc++.h>

// using namespace std;

// void solve() {
//     long long n,m;cin>>n>>m;
//     long long a[n][m];
//     vector<pair<long long, long long>> v;
//     for(long long i=0;i<n;i++) {
//         long long curr=0;
//         long long sum=0;
//         long long in=0;
//         for(long long j=0;j<m;j++) {
//             cin>>a[i][j];
//             sum+=a[i][j];
//             curr+=a[i][j];
//             in+=curr;
//             // cout << curr << " db \n";
//         }
//         v.push_back(make_pair(sum, in));
//     }
//     sort(v.begin(), v.end(), [](pair<long long,long long> &a, pair<long long,long long> &b) {
//         return a.first > b.first;
//     });
//     long long ans=0;
//     // int curr=0;
//     // for(int i=n-1;i>=0;i--) {
//     //     for(int j=0;j<m;j++) {
//     //         curr+=a[v[i].second][j];
//     //         ans+=curr;
//     //     }
//     // }

//     for(long long i=0;i<n;i++) {ans+=v[i].second;}

//     for(long long i=0;i<n;i++) {
//         long long x=n-1-i;
//         ans+= (long long)x*m*v[i].first;
//     }

//     cout << ans << '\n';
//     // if(ans==39) cout << v[1].first << " db";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--) {
//         solve();
//     }
// }
