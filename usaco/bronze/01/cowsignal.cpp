#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++)
    {
        string s;cin >> s;
        for (int x = 0; x < k; x++)
        {
            for (int j = 0; j < n; j++)
            {
               for (int y = 0; y < k; y++)
               {
                    cout << s[j];
               }
               
            }
            cout << '\n';
        }
    }
}
