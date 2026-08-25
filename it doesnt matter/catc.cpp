// in the pool

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
    string S,T;cin>>S>>T;
    sort(S.begin(), S.end());
    sort(T.begin(), T.end());
    string con1="",con2="";
    for(int i=0;i<n;i++) {
        con1+=S[i];
        con1+=T[i];
        con2+=T[i];
        con2+=S[i];
    }
    for(int i=0;i<n;i++) {
        if(con2[i]!=con1[i]) {
            if(con2[i]-'a'<con1[i]-'a') {
                cout << con2 << '\n';
                return;
            }
            else {
                cout << con1 << '\n';
                return;
            }
        }
    }
    cout << con1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
