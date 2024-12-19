#include <bits/stdc++.h>
using namespace std;

// Prime factorization of k
vector<pair<long long,int>> factorize(long long k) {
    vector<pair<long long,int>> factors;
    for (long long i = 2; i * i <= k; i++) {
        int cnt = 0;
        while (k % i == 0) {
            k /= i;
            cnt++;
        }
        if (cnt > 0) factors.push_back({i,cnt});
    }
    if (k > 1) factors.push_back({k,1});
    return factors;
}

// Generate all divisors of k^n given the factorization of k
// k = p1^a1 * p2^a2 * ... pm^am
// k^n = p1^(a1*n) * p2^(a2*n) * ... * pm^(am*n)
void genDivisors(const vector<pair<long long,int>> &factors, int n, vector<long long> &divs) {
    // We'll recursively generate all divisors
    // For each prime factor p_i^ (a_i*n), we choose exponent from 0 to a_i*n
    function<void(int, long long)> dfs = [&](int idx, long long cur) {
        if (idx == (int)factors.size()) {
            divs.push_back(cur);
            return;
        }
        long long p = factors[idx].first;
        int exp = factors[idx].second * n;
        // multiply cur by p^e for e=0 to exp
        long long val = 1;
        for (int e = 0; e <= exp; e++) {
            // cur * val
            dfs(idx+1, cur*val);
            if (e < exp) {
                if (val > LLONG_MAX / p) break; // just in case overflow
                val *= p;
            }
        }
    };
    divs.clear();
    dfs(0, 1);
}

// Count how many numbers in sorted array 'arr' lie in [L,R]
long long countInRange(const vector<long long> &arr, long long L, long long R) {
    if (R < L) return 0;
    auto lower = lower_bound(arr.begin(), arr.end(), L);
    auto upper = upper_bound(arr.begin(), arr.end(), R);
    return (upper - lower);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        // Factorize k
        vector<pair<long long,int>> factors = factorize(k);

        // If k=1 (though problem states k>=2), just handle it trivially:
        // but given constraints k>=2, so no need.
        
        // We'll try n from 0 upwards until k^n > r1*r2 or overflow
        long long maxProd = r1 > 0 && r2 > 0 ? (long long)r1 * (long long)r2 : 0;
        
        // Precompute powers of k until overflow or limit
        // We must be careful to avoid overflow: use __int128 or checks
        vector<long long> powers;
        {
            __int128 cur = 1;
            int n = 0;
            while(true) {
                long long p = (long long)cur;
                powers.push_back(p);
                if (p > maxProd || cur > (__int128)LLONG_MAX / k) {
                    break;
                }
                cur *= k;
                n++;
            }
        }

        long long ans = 0;
        vector<long long> divisors;
        for (int idx = 0; idx < (int)powers.size(); idx++) {
            long long pwr = powers[idx]; 
            // Determine X_min and X_max
            // X_min = max(l1, ceil(k^n / r2))
            // X_max = min(r1, floor(k^n / l2))

            if (pwr == 0) break; // should not happen since pwr starts from 1

            long long X_min, X_max;
            {
                // ceil(pwr / r2)
                long long val1 = (pwr + r2 - 1)/r2; 
                X_min = max(l1, val1);
            }
            {
                // floor(pwr / l2)
                if (pwr < l2) {
                    X_max = 0; // no valid x because pwr/l2 < 1
                } else {
                    long long val2 = pwr/l2;
                    X_max = min(r1, val2);
                }
            }

            if (X_min > X_max) continue;

            // Generate all divisors of k^n
            genDivisors(factors, idx, divisors); // n = idx
            sort(divisors.begin(), divisors.end());

            // Count how many divisors in [X_min, X_max]
            long long cnt = countInRange(divisors, X_min, X_max);
            ans += cnt;
        }

        cout << ans << "\n";
    }

    return 0;
}
