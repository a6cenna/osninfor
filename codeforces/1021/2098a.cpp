// author: sofwant || a6cenna

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
    string s;cin>>s;
    int freq[10]={0};
    for(int i=0;i<10;i++) {
        freq[s[i]-'0']++;
    }
    for(int i=9;i>=0;i--) {
        if(freq[i]>0) {
            cout << i;
            freq[i]--;
        }
        else {
            int temp=i;
            while(freq[temp]<1) {
                temp++;
            }
            freq[temp]--;
            cout << temp;
        }
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
