#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;cin>>n;
    pair<long long, long long> df[n];
    for(long long i=0;i<n;i++) {
        cin>>df[i].first>>df[i].second;
    }

    sort(df,df+n);

    long long time=0;
    long long ans=0;

    for(long long i=0;i<n;i++) {
        time+=df[i].first;
        ans+=df[i].second-time;
    }

    cout << ans;
}
