#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int k, n;
    cin >> k >> n;
    int sesi[10][20], better[20][20]={0};
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> sesi[i][j];
            sesi[i][j]--;
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int l = j + 1; l < n; l++)
            {
                better[sesi[i][j]][sesi[i][l]]++;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (better[i][j] == k) ans++;
        }
    }
    cout << ans;
}
