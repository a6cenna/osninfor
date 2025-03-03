#include <bits/stdc++.h>

using namespace std;

const long long MOD=1000003;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    long long q;cin>>q;
    long long ans=0;

    vector<pair<long,long>>as;
    while(q--) {
        char c;cin>>c;

        if(c=='A') {
            long long s,t;
            cin>>s>>t;
            long long s1=(s+ans)%MOD;
            long long t1=(t+ans)%MOD;
            as.push_back(make_pair(s1, t1));
        }
        if(c=='D') {
            long long i;cin>>i;
            long long i1=(i+ans)%MOD;
            as.erase(as.begin()+i1-1);
        }

        long long time=0;
        
        sort(as.begin(), as.end());
        for(long long i=0;i<as.size();i++) {
            if(as[i].first>time) {
                time=as[i].first+as[i].second-1;
            }
            else {
                time+=as[i].second;
            }
        }
        ans=time;
        cout << ans << '\n';
    }
}
