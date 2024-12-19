#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long d; cin >> d;
    
    vector<pair<long long, long long>> hb(n);
    for(int i = 0; i < n; i++) {
        cin >> hb[i].first >> hb[i].second;
    }
    sort(hb.begin(), hb.end());

    long long bebek = 0;
    for(int i = 0; i < n; i++) {
        if(hb[i].first > d || hb[i].second == 0) continue; // Skip unaffordable items
        
        long long max_can_buy = min(hb[i].second, d / hb[i].first); // Calculate how many can be bought
        bebek += max_can_buy;
        d -= max_can_buy * hb[i].first;

        if (d == 0) break; // Stop if we run out of d
    }
    
    cout << bebek;
}
