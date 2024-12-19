#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  
        string s(n, '0');
        
        s[n / 2] = '1';
        cout << s << endl;
    }
    return 0;
}
