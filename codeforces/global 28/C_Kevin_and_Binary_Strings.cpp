#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int l=s.size();
    if(s.find('0')==string::npos) {
        cout << 1 << " " << l << " " << 1 << " " << 1 << '\n';
        return;
    }
    cout << 1 << " " << l << " ";
    long long maxx=0;
    long long xor1= stoll(s);
    int l1=1, r1=l-1;
    int loc = s.find('0');
    for (int i = 0; i < loc; i++)
    {
        int len = l-loc;
        long long hasil = xor1 ^ stoll(s.substr(i, len));
        if(hasil > maxx) {
            l1=i+1;
            r1=i+l-loc;
            maxx = hasil;
        }
    }
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
