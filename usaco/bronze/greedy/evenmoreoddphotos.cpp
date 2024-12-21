#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("filename.in", "r", stdin);
    // freopen("filename.out", "w", stdout);
    int n;cin>>n;
    int odd=0,even=0;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        if(x%2==0) even++;
        else odd++;
    }
    while(odd>even) {
        even++;
        odd-=2;
    }
    if (even > odd + 1) { even = odd + 1; }
    cout << odd+even;
}
