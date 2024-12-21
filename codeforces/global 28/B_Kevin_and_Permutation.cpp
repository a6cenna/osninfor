#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;cin >> n >> k;
    
    int minimum=1;
    
    for (int i = 1; i <= n; i++)
    {
        if(i%k==0) {
            cout << minimum << " ";
            minimum++;
        }
        else {
            cout << n-i+minimum << " ";
        }
    }
    
    cout << '\n';
    // int w = n - k + 1;
    // int m = (w + k - 1) / k; 

    // vector<int> p(n, 0);

    // for (int i = 1; i <= m; i++)
    // {
    //     int pos = i * k - 1;
    //     if (pos < n)
    //     {
    //         p[pos] = i;
    //     }
    // }

    // int nxt = m + 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (p[i] == 0)
    //     {
    //         p[i] = nxt++;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << p[i] << (i == n - 1 ? '\n' : ' ');
    // }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
