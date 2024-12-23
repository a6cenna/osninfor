#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    
    map<char, int> f;
    
    for(char c:s) {
        f[c]++;
    }
    
    char most=s[0];
    char least=s[0];
    int maxim=0;
    int minim=INT_MAX;

    for (auto fe:f) {
        if(fe.second>= maxim) {
            maxim=fe.second;
            most=fe.first;
        }
        if(fe.second < minim) {
            minim = fe.second;
            least=fe.first;
        }
    }

    for (int i=0;i<n;i++) {
        if(s[i]==least) {
            s[i]=most;
            break;
        }
    }

    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
