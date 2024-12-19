#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    
    vector<vector<int>> a;
    a.push_back(vector<int>());
    while(n--) {
        string s;cin>>s;
        if(s=="add"){
            int l,x,y;cin>>l>>x>>y;
            while(y--) {
                a[l-1].push_back(x);
            }
        }
        else if(s=="new") {
            a.push_back(vector<int>());
        }
        else {
            int l,z;cin>>l>>z;
            cout << a[l-1][z-1] << endl;
        }
    }
}

int main() {
    solve();
}
