#include <bits/stdc++.h>

using namespace std;

int n;
vector<long long> w;

long long solve(int idx, long long s1, long long s2) {
    if(idx==n) {
        return abs(s1-s2);
    }
    return min(solve(idx+1, s1+w[idx], s2),  solve(idx+1, s1, s2+w[idx]));
}

int main() {
    cin>>n;
    w.resize(n);
    for(int i=0;i<n;i++) { cin >> w[i]; }
    cout << solve(0, 0, 0);
}
