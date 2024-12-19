#include <bits/stdc++.h>

using namespace std;

bool canBuildFrame(int w, int b, int k)
{
    int requiredPins = k * (k + 1) / 2;

    if (w + b < requiredPins)
    {
        return false;
    }

    int minPinsPerColor = (k * (k + 1) + 3) / 4;
    if (max(w, b) < minPinsPerColor)
    {
        return false;
    }

    return true;
}

void solve()
{
    long long w, b;
    cin >> w >> b;

    long long left = 0, right = (-1 + sqrt(1 + 8LL * (w+b))) / 2;
    long long result = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (canBuildFrame(w, b, mid))
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << result << '\n';
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
