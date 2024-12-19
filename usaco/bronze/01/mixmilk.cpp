#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    pair<int, int> milk[3];
    for(int i=0;i<3;i++) {
        cin >> milk[i].first >> milk[i].second;
    }
    for(int i=0;i<100;i++) {
        int from=i%3;
        int to=(i+1)%3;

        int pour=min(milk[from].second, milk[to].first-milk[to].second);
        milk[from].second-=pour;
        milk[to].second+=pour;
    }
    for(int i=0;i<3;i++) {
        cout << milk[i].second << '\n';
    }
}
