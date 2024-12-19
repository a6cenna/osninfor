#include <bits/stdc++.h>

using namespace std;

int main() {
    int q; 
    cin >> q;

    while (q--)
    {
        string s, t;

        cin >> s >> t;

        int sameUntil = min(s.length(), t.length());

        for (int i = 0; i < min(s.length(), t.length()); i++)
        {
            if (s[i]!=t[i]) {
                sameUntil=i;
                break;
            }
        }
        if (sameUntil>0) {
            cout << sameUntil+1+ s.length()-sameUntil+t.length()-sameUntil << endl;
        }
        else {
            cout << s.length()+t.length() << endl;
        }
    }
    
    
    return 0;
}
