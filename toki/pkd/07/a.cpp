#include <bits/stdc++.h>

using namespace std;

int n;
int a[500];
vector<bool> r(50000, false);
vector<int> res(50000);

int solve(int x){
    if (x == 0) return 0;
    if (x < 0) return INT_MAX;
    if (r[x]) return res[x];
    int best = INT_MAX;
    for (int i=0;i<n;i++)
    {
        if(x>=a[i]) {
            if(solve(x - a[i])!=INT_MAX)
            best = min(best, solve(x - a[i]) + 1);
        }
    }
    res[x]=best;
    r[x] = true;
    
    return res[x];
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    if(solve(k)==INT_MAX) {
        cout << -1;
        return 0;
    }

    cout << solve(k);
}
