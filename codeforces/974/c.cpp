#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int gold[n];
    int Agold=0;
    for (int i = 0; i < n; i++)
    {
        cin >> gold[i];
        Agold+=gold[i];
    }
    Agold/=n;
    sort(gold, gold+n);
    int need = (Agold+gold[n/2])/n;

    cout << need << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
