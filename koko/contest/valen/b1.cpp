#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    pair<int, int> lp[n];
    map<int,int> perlu_tuker;
    for(int i=0;i<n;i++) {
        cin>>lp[i].first;
    }
    int perlu=0;
    for(int i=0;i<n;i++) {
        cin>>lp[i].second;
        if(lp[i].first!=lp[i].second) {
            perlu++;
            perlu_tuker[lp[i].first]=lp[i].second;
        }
    }

    for(auto &x : perlu_tuker) {
        if (perlu_tuker.count(x.second) && perlu_tuker[x.second]==x.first) {
            perlu--;
            perlu_tuker.erase(x.second);
        }
    }

    cout << perlu-1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
