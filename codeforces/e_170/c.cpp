#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    const int MAX_N = 2e5 + 5;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        map<ll, ll> freq;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Extract unique numbers and their counts
        vector<ll> nums;
        vector<ll> counts;
        for (auto &p : freq) {
            nums.push_back(p.first);
            counts.push_back(p.second);
        }

        int m = nums.size();
        ll max_counts = 0;
        int i = 0;
        while (i < m) {
            int j = i;
            // Find the range of consecutive numbers
            while (j + 1 < m && nums[j + 1] - nums[j] <= 1) {
                j++;
            }
            int len = j - i + 1;

            // Compute prefix sums for counts in this range
            vector<ll> prefix(len + 1, 0);
            for (int idx = 0; idx < len; ++idx) {
                prefix[idx + 1] = prefix[idx] + counts[i + idx];
            }

            if (len <= k) {
                // Take all counts
                max_counts = max(max_counts, prefix[len]);
            } else {
                // Use sliding window of size k
                for (int idx = 0; idx + k <= len; ++idx) {
                    ll total_counts = prefix[idx + k] - prefix[idx];
                    max_counts = max(max_counts, total_counts);
                }
            }

            i = j + 1;
        }

        cout << max_counts << endl;
    }

    return 0;
}
