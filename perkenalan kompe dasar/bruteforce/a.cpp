// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    string a,b;cin>>a>>b;
    int n=a.length();
    for(int i=0;i<n;i++) {
        string a1=a.substr(0,i)+a.substr(i+1,n-i-1);
        if(a1==b) {
            cout << "Tentu saja bisa!\n";
            return;
        }
    }
    cout << "Wah, tidak bisa :(\n";
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
