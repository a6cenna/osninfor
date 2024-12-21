#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n=s.size();
    cout << 1 << " " << n << " ";
    if(s.find('0')==string::npos) {
        cout << 1 << " " << 1 << '\n';
        return;
    }
    
    int index_0_pertama = s.find('0');
    int nol=1;
    for (int i = index_0_pertama+1; i < n; i++)
    {
        if(s[i]=='0') nol++;
        else break;
    }
    int l1=max(1, index_0_pertama-nol+1);
    int r1=l1+(n-1-index_0_pertama);
    if(l1>r1) swap(l1, r1);

    cout << l1 << " " << r1 << '\n';
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

    return 0;
}
