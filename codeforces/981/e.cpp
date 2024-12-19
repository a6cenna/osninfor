#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <utility>

using namespace std;

typedef long long ll;

const int MOD = 1e9 + 7;

// Function to compute the Pisano period and positions where Fibonacci numbers modulo k equal zero
void compute_pisano_period(int k, int &period, vector<int> &positions) {
    int prev = 0;
    int curr = 1 % k;
    period = 0;
    positions.clear();

    map<pair<int, int>, int> seen;

    if (curr == 0) {
        positions.push_back(2); // Position adjusted for 1-based indexing
    }

    while (true) {
        int temp = (prev + curr) % k;
        prev = curr;
        curr = temp;
        period++;

        if (curr == 0) {
            positions.push_back(period + 2); // Adjust for 1-based indexing
        }

        // Check for the beginning of a new period
        if (prev == 0 && curr == 1 % k) {
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;

    vector<pair<ll, int>> test_cases;
    set<int> k_values;

    for (int i = 0; i < t; ++i) {
        ll n;
        int k;
        cin >> n >> k;
        test_cases.push_back({n, k});
        k_values.insert(k);
    }

    map<int, int> pisano_periods;                // Stores Pisano period for each k
    map<int, vector<int>> zero_positions;        // Stores positions where Fibonacci numbers modulo k equal zero

    for (auto k : k_values) {
        int period;
        vector<int> positions;

        if (k == 1) {
            // Special case when k = 1
            period = 1;
            positions.push_back(1); // All positions
        } else {
            compute_pisano_period(k, period, positions);
        }

        pisano_periods[k] = period;
        zero_positions[k] = positions;
    }

    for (auto &test_case : test_cases) {
        ll n = test_case.first;
        int k = test_case.second;

        ll index;
        if (k == 1) {
            // All Fibonacci numbers modulo 1 are zero
            index = n % MOD;
            cout << index << endl;
            continue;
        }

        int Pk = pisano_periods[k];
        vector<int> &zeros = zero_positions[k];
        int Sk = zeros.size();

        if (Sk == 0) {
            // No Fibonacci number divisible by k
            cout << -1 << endl;
            continue;
        }

        ll q = (n - 1) / Sk;
        ll r = (n - 1) % Sk;

        index = q * Pk + zeros[r];
        index %= MOD;

        cout << index << endl;
    }

    return 0;
}
