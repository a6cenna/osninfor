#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [&](const pair<long long, long long> &a, const pair<long long, long long> &b) -> bool
         {
            if(a.first != b.first)
                return a.first < b.first;
            return a.second < b.second; });

    // Prepare the result by concatenating ai1 and ai2 of each sorted pair
    string output;

    output.reserve(22LL * n);

    for (int i = 0; i < n; ++i)
    {
        output += to_string(v[i].first) + ' ';
        output += to_string(v[i].second) + ' ';
    }

    if (!output.empty())
    {
        output.pop_back();
    }
    cout << output << '\n';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
