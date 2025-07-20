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
    int n;cin>>n;
    string s;cin>>s;
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for(int i=0;i<n;i++) {
        freq[s[i]-'a']++;
        if(freq[s[i]-'a']>=2) {
            if(s[i]==s[0]&&s[0]==s[n-1]) {
                if(freq[s[i]-'a']>=3) {
                    cout <<"YES\n";
                    return;
                }
            }
            else {
                cout <<"YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
