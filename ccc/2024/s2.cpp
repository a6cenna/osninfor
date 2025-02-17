#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,n;cin>>t>>n;
    for (int i = 0; i < t; i++)
    {
        string s;cin>>s;
        char c[26] = {0};
        for(int j=0;j<s.length();j++) {
            c[s[j]-'a']++;
        }
        bool possible=true;
        bool temp= (c[s[0]-'a']>1 ? 1 : 0);
        for(int j=1;j<s.length();j++) {
            if(temp) {
                if(c[s[j]-'a']!=1) {
                    possible=false;
                    break;
                }
            }
            else {
                if(c[s[j]-'a']==1) {
                    possible=false;
                    break;
                }
            }
            temp=!temp;
        }

        cout << (possible ? "T" : "F") << '\n';
    }
    
}
