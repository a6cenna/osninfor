#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        int mina=1001;
        int maxa=0;

        int n;
        cin >> n;
        vector<int> a(n);

        for(int i =0;i<n;i++) {
            cin >> a[i];
            if (a[i] < mina) mina = a[i];
            if (a[i] > maxa) maxa = a[i];
        }

        int result = (n - 1) * (maxa - mina);
        cout << result << endl;
    }

    return 0;
}
