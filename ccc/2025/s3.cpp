// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     long long n,m;cin>>n>>m;
//     long long q;cin>>q;
//     vector<vector<long long>> cp(m+1);

//     map<int, pair<int,int>> i_to_cp;

//     for (long long i = 0; i < n; i++)
//     {
//         long long c,p;cin>>c>>p;
//         cp[c].push_back(p);
//         i_to_cp[i]=make_pair(c, p);
//     }
    
//     long long ans=0;
//     long long minfirst=LLONG_MAX;
//     long long maxsecond=LLONG_MIN;
//     for (long long i = 1; i <= m; i++)
//     {
//         sort(cp[i].begin(), cp[i].end(), greater<long long>());
//     }
    
//     for (long long i = 1; i <= m; i++)
//     {
//         ans+=cp[i][0];
//         minfirst=min(cp[i][0], minfirst);
//         maxsecond=max(maxsecond, cp[i][1]);
//     }
    
//     if(minfirst<maxsecond) {
//         ans+=maxsecond-minfirst;
//     }

//     cout << ans;
//     while(q--) {
//         int t,i;cin>>t>>i;
//         if(t==1) {
//             int c;cin>>c;
//             cp[c].push_back(cp[i_to_cp[i].first][i_to_cp[i].second]);
//             cp[i_to_cp[i].first][i_to_cp[i].second]=0;
//         }
//         if(t==2) {
//             int p;cin>>p;
//             cp[i_to_cp[i].first][i_to_cp[i].second]
//         }
//     }
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     long long n,m;cin>>n>>m;
//     long long q;cin>>q;
//     vector<vector<pair<long long, int>>> cp(m+1);

//     map<int, pair<int,int>> i_to_cp;

//     for (long long i = 0; i < n; i++)
//     {
//         long long c,p;cin>>c>>p;
//         cp[c].push_back(make_pair(p, i));
//         i_to_cp[i]=make_pair(c, p);
//     }
    
//     long long ans=0;
//     long long minfirst=LLONG_MAX;
//     long long maxsecond=LLONG_MIN;
//     for (long long i = 1; i <= m; i++)
//     {
//         sort(cp[i].begin(), cp[i].end(), greater<pair<long long,int>>());
//     }
    
//     for (long long i = 1; i <= m; i++)
//     {
//         ans+=cp[i][0].first;
//         minfirst=min(cp[i][0].first, minfirst);
//         maxsecond=max(maxsecond, cp[i][1].first);
//     }
    
//     if(minfirst<maxsecond) {
//         ans+=maxsecond-minfirst;
//     }

//     cout << ans;
//     while(q--) {
//         int t,i;cin>>t>>i;
//         if(t==1) {
//             int c;cin>>c;
//             if()
//         }
//     }
// }


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     long long n,m;cin>>n>>m;
//     long long q;cin>>q;
//     vector<vector<long long>> cp(m+1);

//     for (long long i = 0; i < n; i++)
//     {
//         long long c,p;cin>>c>>p;
//         cp[c].push_back(p);
//     }
    
//     long long ans=0;
//     long long minfirst=LLONG_MAX;
//     long long maxsecond=LLONG_MIN;
//     for (long long i = 1; i <= m; i++)
//     {
//         sort(cp[i].begin(), cp[i].end(), greater<long long>());
//     }
    
//     for (long long i = 1; i <= m; i++)
//     {
//         ans+=cp[i][0];
//         minfirst=min(cp[i][0], minfirst);
//         maxsecond=max(maxsecond, cp[i][1]);
//     }
    
//     if(minfirst<maxsecond) {
//         ans+=maxsecond-minfirst;
//     }

//     cout << ans;
//     while(q--) {
//         int t,i;cin>>t>>i;
//         if(t==1) {
//             int c;cin>>c;
//         }
//     }
// }
