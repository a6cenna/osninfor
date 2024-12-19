#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x; 
    cin >> n >> x;

    int coralh[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coralh[i];
    }
    
    int top = 2000000000, bot=1, h=0;
    while (top>=bot)
    {
        int mid=((long long)bot+top)/2;
        
        long long total =0;
        for (int i = 0; i < n; i++)
        {
            total+=max(mid-coralh[i], 0);
        }
        if (total>x) {
            top=mid-1;
        }
        else {
            bot=mid+1;
            h=mid;
        }
    }

    cout << h<<'\n';
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    
}
