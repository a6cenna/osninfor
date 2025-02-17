#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long a,b,c;cin>>a>>b>>c;
    long long m;cin>>m;
    vector<pair<int,int>> v;
    for(long long i=0;i<m;i++) {
        long long x;cin>>x;
        string s;cin>>s;
        if(s=="USB") v.push_back(make_pair(x, 0));
        else v.push_back(make_pair(x, 1));
    }
    sort(v.begin(), v.end());

    long long count=0;
    long long ans=0;

    for(auto p:v) {
        if(p.second==0) {
            if(a) {
                a--;
                count++;
                ans+=p.first;
            }
            else if(c) {
                c--;
                count++;
                ans+=p.first;
            }
        }
        else {
            if(b) {
                b--;
                count++;
                ans+=p.first;
            }
            else if(c) {
                c--;
                count++;
                ans+=p.first;
            }
        }
    }

    cout << count << " " << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
