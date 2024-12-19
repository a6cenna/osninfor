#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<long long> data(n);
        for (int j = 0; j < n; j++)
        {
            cin >> data[j];
        }
        sort(data.begin(), data.end());
        long long ans=(data[0]+data[1])/2;
        for (int k = 2; k < n; k++)
        {
            ans=(ans+data[k])/2;
        }
        cout << ans << endl;
    }
    
    

    return 0;
}
