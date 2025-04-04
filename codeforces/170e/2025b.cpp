// author: sofwant || a6cenna
// created at 03/04/2025
// suffering leaves suffering leaves.

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

int MOD = 1e9+7;

vector<int> n;
vector<int> k;
vector<int> ans;

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;
    n.resize(t);
    k.resize(t);
    
    for(int i=0;i<t;i++)cin>>n[i];
    for(int i=0;i<t;i++)cin>>k[i];

    ans.resize(*max_element(k.begin(), k.end())+1, 1);
    for(int i=1;i<ans.size();i++) ans[i]=2LL*ans[i-1]%MOD;

    for(auto k:k) cout << ans[k] << '\n';
}
