#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    int p=0;
    while(n--) {
        char c;cin>>c;
        int x;cin>>x;
        if(c=='P') {
            p+=x;
        }
        else {
            if(x-p>0) {
                cout <<"YES" << '\n';
            }
            else {
                cout <<"NO" << '\n';
            }
            p-=x;
            if(p<0)p=0;
        }
    }
}
