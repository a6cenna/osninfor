#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    pair<int, int> lp[n];
    map<int,int> l_ke_urutan;
    for(int i=0;i<n;i++) {
        cin>>lp[i].first;
        l_ke_urutan[lp[i].first]=i;
    }
    for(int i=0;i<n;i++) {
        cin>>lp[i].second;
    }
    // posisi dari yang cowoknya si cewek
    int cewek_ke_cowok[n];
    for(int i=0;i<n;i++) {
        cewek_ke_cowok[i]=l_ke_urutan[lp[i].second];
    }
    bool udah[n] = {false};
    int sicklus=0;
    // kalau ada siklus a melalui banyak hal ke b yang nanti jadiin satu siklus
    // lah sama aja graf
    for(int i=0;i<n;i++) {
        if(!udah[i]) {
            sicklus++;
            udah[i]=true;
            int temp=cewek_ke_cowok[i];
            while(!udah[temp]) {
                udah[temp]=true;
                temp=cewek_ke_cowok[temp];
            }
        }
    }


    cout << n-sicklus << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
