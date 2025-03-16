#include <bits/stdc++.h>

using namespace std;

vector<long long> pre(10e6, 0);

bool isSquare(long long x) {
    long long sr=sqrt(x);
    return sr*sr==x;
}

void solve() {
    int n;cin>>n;
    if(n<2 || isSquare(pre[n])) {
        cout << -1 << '\n';
        return;
    }
    // set<int> pell;
    // int a=3;
    // int b=1;
    // int n1=8;
    // while(n1 < 10e6) {
    //     pell.insert(n1);
    //     int a1=3*a+8*b;
    //     int b1=a+3*b;
    //     a=a1;
    //     b=b1;
    //     n1=(a-1)/2;
    // }
    // if(pell.count(n)) {
    //     cout << -1 << '\n';
    //     return;
    // }
    cout << 2 << ' ' << 1 << ' ';
    // for (int i = 3; i <= n; i++)
    // {
    //     if(pell.count(i)) {
    //         cout << i+1 << ' ' << i << ' ';
    //         i++;
    //     }
    //     else cout << i << ' ';
    // }

    for (int i = 3; i <= n; i++)
    {
        if(isSquare(pre[i])) {
            cout << i+1 << ' ' << i << ' ';
            i++;
        }
        else cout << i << ' ';
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1;i<10e6;i++) {
        pre[i]=pre[i-1]+i;
    }

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
