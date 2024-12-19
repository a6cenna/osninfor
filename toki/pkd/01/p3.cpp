#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;
    vector<char> dari(26,'?'), ke(26, '?');
    for (int i = 0; i < n; i++)
    {
        if(dari[a[i]-'A']== '?') {
            dari[a[i]-'A'] = b[i];
        }
        else if(dari[a[i]-'A']!= b[i]) {
            cout << "Pak dengklek bingung" << endl;
            return;
        }
        if(ke[b[i]-'A']== '?') {
            ke[b[i]-'A'] = a[i];
        }
        else if(ke[b[i]-'A']!= a[i]) {
            cout << "Pak dengklek bingung" << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ke[c[i]-'A'];
    }
    
}

int main() {
    solve();
}
