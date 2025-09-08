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
    string sub;cin>>sub;
    int n,q;cin>>n>>q;
    string s;cin>>s;
    s=')'+s;
    int pre[n+1];
    string s1=")";
    memset(pre, 0, sizeof(pre));
    for(int i=1;i<=n;i++) {
        s1+=s[i];
        pre[i]=pre[i-1];
        pre[i]+=1;
        while(i+1<=n&&s[i]==s[i+1]) {
            i++;
            pre[i]=pre[i-1];
        }
    }
    // for(int i=1;i<=n;i++) cout << pre[i] << '\n';
    while(q--) {
        int l,r;cin>>l>>r;
        if(pre[r]-pre[l]+1<10) {
            cout << pre[r]-pre[l]+1 << ' ' << s1.substr(pre[l], pre[r]-pre[l]+1) << '\n';
        }
        else cout << pre[r]-pre[l]+1 << '\n';;
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
