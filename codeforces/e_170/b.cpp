#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod; 

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;

        exp = exp >> 1;     
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    vector<int> n(t);
    vector<int> k(t);

    for (int i = 0; i < t; ++i) {
        cin >> n[i];
    }

    // Read k values
    for (int i = 0; i < t; ++i) {
        cin >> k[i];
    }

    for (int i = 0; i < t; ++i) {
        cout << mod_pow(2, k[i], MOD) << endl;
    }

    return 0;
}
