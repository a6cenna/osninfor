#include <bits/stdc++.h>

using namespace std;

int main() {
    string a,b;cin>>a>>b;

    if(a.length()-1>b.length()) {
        cout << "Wah, tidak bisa :(" << "\n";
        return 0;
    }

    for(int i=0;i<a.length();i++) {
        if(a[i]!=b[i]) {
            a.erase(i,1);
            if(a==b) {
                cout << "Tentu saja bisa!" << "\n";
                return 0;
            }
        }
    }
    cout << "Wah, tidak bisa :(" << "\n";
}
