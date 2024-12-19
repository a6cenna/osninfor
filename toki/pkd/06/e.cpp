#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    vector<pair<int,int>> sd(n);
    for(int i=0;i<n;i++){
        cin>>sd[i].first>>sd[i].second;
    }
    sort(sd.begin(), sd.end(), [](pair<int, int> x, pair<int, int> y) {
        return x.first+x.second < y.first+y.second;
    });
    // for(int i=0;i<n;i++){
    //     cout<<sd[i].first << " " << sd[i].second << endl;
    // }
    int sel=0;
    int start=0;
    for(int i=0; i<n;i++) {
        if(sd[i].first>=start) {
            sel++;
            start=sd[i].first+sd[i].second;
        }
    }
    cout << sel;
}
