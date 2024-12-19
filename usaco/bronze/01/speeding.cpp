#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    pair<int, int> segr[n];
    pair<int, int> segb[m];
    for (int i = 0; i < n; i++)
    {
        cin >> segr[i].first >> segr[i].second;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> segb[i].first >> segb[i].second;
    }
    int ans = 0;
    int at = 0;
    for (int i = 0; i < n; i++)
    {
        while (segr[i].first != 0)
        {
            if (segb[at].first == 0) at++;

            int length = min(segb[at].first, segr[i].first);
            ans = max(segb[at].second-segr[i].second, ans);
            segr[i].first-=length;
            segb[at].first-=length;
        }
    }

    cout << ans;
}
