#include <bits/stdc++.h>

using namespace std;
int p[25][25];
int papan[25][25];
vector<vector<bool>> v(25, vector<bool>(25, false));
int t = 0;
int m, n;

void klik(int x, int y, int warna)
{
    if (x >= 0 && x < m && y >= 0 && y < n)
    {
        if (!v[x][y])
        {
            if (papan[x][y] == warna)
            {
                t++;
                v[x][y] = true;
                klik(x, y + 1, warna);
                klik(x + 1, y, warna);
                klik(x, y - 1, warna);
                klik(x - 1, y, warna);
            }
        }
    }
}

void runtuh()
{
    for (int y = 0; y < m; y++)
    {
        for (int u = 0; u < n; u++)
        {
            if (v[y][u])
            {
                papan[y][u] = 0;
            }
        }
    }
    for (int u = 0; u < n; u++)
    {
        int empty = m - 1;
        for (int y = m - 1; y >= 0; y--)
        {
            if (papan[y][u] != 0)
            {
                if (y != empty)
                {
                    papan[empty][u] = papan[y][u];
                    papan[y][u] = 0;
                }
                empty--;
            }
        }
    }
    fill(v.begin(), v.end(), vector<bool>(n, false));
}

int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    int temp = 0;
    int maxt = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int h = 0; h < m; h++)
            {
                for (int z = 0; z < n; z++)
                {
                    papan[h][z] = p[h][z];
                }
            }
            t = 0;
            temp = 0;
            fill(v.begin(), v.end(), vector<bool>(n, false));
            klik(i, j, papan[i][j]);
            if (t >= 2)
            {
                bool foundSecondMove = false;
                temp = t * (t - 1);
                runtuh();
                for (int k = 0; k < m; k++)
                {
                    for (int l = 0; l < m; l++)
                    {
                        if (papan[k][l] != 0)
                        {
                            t = 0;
                            klik(k, l, papan[k][l]);
                            if (t >= 2)
                            {
                                foundSecondMove = true;
                                maxt = max(maxt, temp + t * (t - 1));
                            }
                        }
                    }
                }
                if (!foundSecondMove)
                {
                    maxt = max(maxt, temp);
                }
            }
        }
    }

    cout << maxt;
}
