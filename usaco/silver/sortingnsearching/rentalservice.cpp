#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("rental.in", "r", stdin);
    freopen("rental.out", "w", stdout);

    // the idea is sort the cow for the milk galon
    // then we use the prefix sum for it
    int n,m,r;cin>>n>>m>>r;
    
    int a[n];
    
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    vector<pair<int, int>> milker(m);
    for(int i=0;i<m;i++) {
        cin>>milker[i].first>>milker[i].second;
    }

    int rent[r];

    for(int i=0;i<r;i++) {
        cin>>rent[i];
    }

    sort(a,a+n, greater<int>());
    sort(milker.begin(), milker.end(), [](pair<int,int> &a, pair<int,int> &b) {
        return a.second > b.second; 
    });
    sort(rent, rent+r, greater<int>());

    vector<long long> prefixsum(n+1, 0);

    int store_at=0;
    for(int i=1;i<=n;i++) {
        prefixsum[i]=prefixsum[i-1];
        while(store_at<m && a[i-1]>0) {
            int used=min(a[i-1], milker[store_at].first);
            a[i-1]-=used;
            milker[store_at].first-=used;
            prefixsum[i]+=milker[store_at].second*used;
            if(milker[store_at].first==0) {
                store_at++;
            }
        }
    }

    long long rent_val=0;
    int rent_at=0,i=n-1;

    while(rent_at<r && i>=0) {
        rent_val+=rent[rent_at];
        prefixsum[i]+=rent_val;
        i--;rent_at++;
    }
    long long ans=0;
    for(auto p:prefixsum) {
        ans=max(p,ans);
    }

    cout << ans;
}

