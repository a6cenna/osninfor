#include <bits/stdc++.h>

using namespace std;

int grid[1000][1000];
bool marked[1000][1000];

int n, m;

void floodfill(int r, int c)
{
    if ((r < 0 || r >= n || c < 0 || c >= m) || (marked[r][c]) || (grid[r][c] == 1))
    {
        return;
    }
    marked[r][c] = true;
    floodfill(r + 1, c);
    floodfill(r - 1, c);
    floodfill(r, c + 1);
    floodfill(r, c - 1);
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        for (int j = 0; j < m; j++)
        {
            if (c[j] == '.')
            {
                grid[i][j] = 0;
            }
            else
            {
                grid[i][j] = 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != 1 && !marked[i][j])
            {
                ans++;
                floodfill(i, j);
            }
        }
    }

    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
