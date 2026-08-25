// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    string s,s1;cin>>s>>s1;
    int n=s.length();

    int sum=0;
    int tmp=0, bebas=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='+') sum++;
        else sum--;
        if(s1[i]=='+') tmp++;
        else if(s1[i]=='-') tmp--;
        else bebas++;
    }
    if(bebas==0&&sum==tmp) {
        cout << "1.000000000000" << '\n';
        return;
    }
    int sisa=abs(sum-tmp);
    if(sisa%2&&bebas%2==0) {
        cout << "0.000000000000" << '\n';
        return;
    }
    else if(sisa%2==0&&bebas%2) {
        cout << "0.000000000000" << '\n';
        return;
    }

    if(sisa>bebas) {
        cout << "0.000000000000" << '\n';
        return;
    }

    int cur=0;
    for(int i=0;i<bebas;i++) {
        if(cur>=sisa) i++;
        cur++;
    }

    int a=1, b=1, c=1;
    for(int i=bebas;i>=1;i--) a*=i;
    for(int i=bebas-cur;i>=1;i--) b*=i;
    for(int i=cur;i>=1;i--) c*=i;

    // cout << a << ' ' << b << ' ' << c << " dbg\n";

    cout << fixed << setprecision(10) << ((double)a/((double)b*c))/pow(2,bebas) << '\n';
}

signed main() {
    war_without_reason

    solve();
}
