#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int disturbance = 0;
        int first = -1, last = -1;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (i > 0 && a[i] == a[i - 1]) {
                disturbance++;
                if (first == -1)
                    first = i - 1;
                last = i - 1;
            }
        }

        if (disturbance <= 1) {
            cout << 0 << endl;
        } else {
            int gap = last - first;
            if (gap <= 1) {
                cout << disturbance << endl;
            } else if (gap == 2) {
                cout << min(1, disturbance - 1) << endl;
            } else {
                cout << disturbance - 1 << endl;
            }
        }
    }
    return 0;
}
