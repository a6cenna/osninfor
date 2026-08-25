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
    int n,m,k;cin>>n>>m>>k;
    map<pair<int,char>,vector<int>> mp; // pertanyaan ke berapa dan jawabannya apa, isinya urutan ke berapa yg jawab itu
    vector<vector<int>> cnt(n+1, vector<int>(n+1, 0));
    for(int i=1;i<=n;i++) {
        string s;cin>>s;
        int lst=-1;
        for(int j=0;j<m;j++) {
            if(s[j]=='.') continue;
            for(auto x:mp[{j+1,s[j]}]) {
                cnt[i][x]++;
                if(cnt[i][x]>=k) lst=max(lst,x);
            }
            mp[{j+1,s[j]}].pb(i);
            // cout << j+1 << ' ' << s[j] << " dbg\n";
        }
        if(lst!=-1) {
            cout << lst << ' ' << i << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    war_without_reason

    solve();
}
