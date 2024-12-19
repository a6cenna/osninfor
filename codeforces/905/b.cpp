#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int a[26]={0};
    int pal=0;
    for (int i = 0; i < n; i++)
    {
        a[s[i]-'a']++;
        if(a[s[i]-'a']>1) {
            // cout << s[i] << "d" << '\n';
            pal+=2;
            a[s[i]-'a']=0;
        }
    }
    // cek kalau kita ngurangi k huruf dari n apakah nanti string sisa-1 <= pal
    if(n-k<=pal+1) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
