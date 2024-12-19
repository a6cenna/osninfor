#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n, x;
        cin >> n >> x;
        long long total = 0;
        long long maxModel = 0;
        for (int j = 0; j < n; j++) {
            long long y;
            cin >> y;
            total += y;
            if (y > maxModel) {
                maxModel = y;
            }
        }
        long long totalCustomers = (total + x - 1) / x;
        long long min = max(totalCustomers, maxModel);
        cout << min << endl;
    }

    return 0;
}
