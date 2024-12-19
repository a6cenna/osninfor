#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;cin>>k;
    vector<pair<long long,int>> pc(k);
    for (int i = 0; i < k; i++)
    {
        cin>>pc[i].second;
    }
    for (int i = 0; i < k; i++)
    {
        cin>>pc[i].first;
    }
    int n;cin>>n;
    long long b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    sort(b,b+n,greater());
    sort(pc.begin(), pc.end());
    long long biaya=0;
    int at=0;
    for(int i=0;i<n;i++) {
        if(pc[at].second==0) {
            at++;
        }
        biaya+=b[i]*pc[at].first;
        pc[at].second--;
    }

    cout << biaya;
}
