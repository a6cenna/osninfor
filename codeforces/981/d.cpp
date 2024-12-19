#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    // To improve I/O efficiency
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        unordered_map<long long, int> last_occurrence;
        last_occurrence[0] = 0;
        long long sum = 0;
        int ans = 0;
        int last_cut = 0;

        for (int i = 1; i <= n; ++i) {
            sum += a[i - 1];
            if (last_occurrence.count(sum) && last_occurrence[sum] >= last_cut) {
                ++ans;
                last_cut = i;
                sum = 0;
                last_occurrence.clear();
                last_occurrence[0] = i;
            } else {
                last_occurrence[sum] = i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
