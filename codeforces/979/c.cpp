#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool aw = false;
        int i = 0;
        while (i < n) {
            if (s[i] == '1') {
                int j = i;
                while (j + 1 < n && s[j + 1] == '1') {
                    j++;
                }
                int groupLength = j - i + 1;
                if (groupLength > 1) {
                    aw = true;
                    break;
                }
                i = j + 1;
            } else {
                i++;
            }
        }

        if (aw) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
