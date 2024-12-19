#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b;
    set<int> available; 

    for (int i = 1; i <= n; i++) {
        available.insert(i);
    }

    for (int i = 0; i < n; i++) {
        if (freq[a[i]] == 0) {
            b.push_back(a[i]);
            freq[a[i]]++;
            available.erase(a[i]);  
        } else {
            int next_available = *available.begin(); 
            b.push_back(next_available);
            freq[next_available]++;
            available.erase(next_available);  
        }
    }

    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
