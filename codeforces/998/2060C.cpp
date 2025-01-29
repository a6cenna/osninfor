#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> freq(n+1,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        freq[x]++;
    }
    long long used_in_pairs=0;
    for(int i=1;i<=(k-1)/2;i++){
        int j=k-i;
        if(j>=1 && j<=n){
            used_in_pairs+=2LL*min(freq[i],(int)freq[j]);
        }
    }
    if(k%2==0){
        int half=k/2;
        if(half>=1 && half<=n){
            used_in_pairs+=2LL*(freq[half]/2);
        }
    }
    long long R=n-used_in_pairs;
    long long score=(n/2)-(R/2);
    cout<<score<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
}
