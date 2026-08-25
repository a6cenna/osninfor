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

void solve() {
    int n,q;cin>>n>>q;
    string ans="";
    for(int i=0;i<n;i++) ans+=".";
    deque<int> dq;
    dq.pb(1);
    for(int i=2;i<=n;i++) {
        if(dq.empty()) {
            dq.pb(i);
            ans[i-1]='.';
            continue;
        }
        int cur=dq.back();
        cout << "? " << cur << ' ' << i << endl;
        int resp;cin>>resp;
        if(resp==1) {
            ans[cur-1]='(';
            dq.pop_back();
            ans[i-1]=')';
        }
        else {
            dq.push_back(i);
            ans[i-1]='.';
        }
    }
    int kos=0;
    for(int i=0;i<n;i++) {
        if(ans[i]=='.') kos++;
    }
    int cnt=0;
    for(int i=0;i<n;i++) {
        if(ans[i]=='.') {
            if(cnt<kos/2) {
                ans[i]=')';
                cnt++;
            }
            else ans[i]='(';
        }
    }

    cout << "! "<< ans << '\n';
}

int main() {
    war_without_reason

    solve();
}

// )))(((
