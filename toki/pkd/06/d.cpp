#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x;cin>>n>>x;
    
    vector<pair<int,int>> wc(n);
    
    for(int i=0;i<n;i++) {
        cin >> wc[i].second;
    }
    for(int i=0;i<n;i++) {
        cin >> wc[i].first;
    }
    for(int i=0;i<n;i++) {
        cin >> wc[i].second;
    }
    sort(wc.begin(), wc.end(), [](pair<int,int> p, pair<int,int> q) {
        return p.first/p.second > q.first/q.second;
    });
    double ans=0.00000;
    for(int i=0;i<n;i++) {
        if(wc[i].second<=x) {
            x-=wc[i].second;
            ans+= (double) wc[i].first;
        }
        else {
            ans+=(double)x*(double)wc[i].first/(double)(wc[i].second);
            break;
        }
    }

    cout << setprecision(5) << fixed << ans;
}
