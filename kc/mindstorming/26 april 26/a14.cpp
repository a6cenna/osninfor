// in the pool

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
    string s,t;cin>>s>>t;
    int pos[26];
    memset(pos,-1,sizeof(pos));
    for(int i=0;i<t.length()-1;i++) {
        pos[t[i]-'a']=i;
    }
    int cur=INT_MAX;
    int idx=-1;
    for(int i=1;i<s.length();i++) {
        int x=s[i]-'a';
        if(pos[x]==-1) continue;
        int cnt=i+1+(t.size()-pos[x]-1);
        if(cnt<cur) {
            cur=cnt;
            idx=i;
        }
    }
    if(idx==-1) {
        cout << -1 << '\n';
        return;
    }
    for(int i=0;i<idx;i++) {
        cout << s[i];
    }
    for(int i=pos[s[idx]-'a'];i<t.length();i++) {
        cout << t[i];
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
