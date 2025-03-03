#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;cin>>s;
    long long c;cin>>c;
    long long length=0;
    set<char> num;
    num.insert('0');
    num.insert('1');
    num.insert('2');
    num.insert('3');
    num.insert('4');
    num.insert('5');
    num.insert('6');
    num.insert('7');
    num.insert('8');
    num.insert('9');
    for (long long i = 1; i < s.length(); i+=2)
    {
        long long temp=i;
        while(num.count(s[i+1])) {
            i++;
        }
        if(i-temp>0) {
            string substring = s.substr(temp, temp+i);
            length+=stoll(substring);
        }
        else {
            length+=s[i]-'0';
        }

        if(i+2>=s.length() && (c+1)%length==0) {
            cout << s[temp-1]; 
            return 0;
        }
    }
    long long to_pass=(c+1)%length;
    for (long long i = 1; i < s.length(); i+=2)
    {
        long long temp=i;
        while(num.count(s[i+1])) {
            i++;
        }
        if(i-temp>0) {
            string substring = s.substr(temp, temp+i);
            to_pass-=stoll(substring);
            if(to_pass<=0) {
                cout << s[temp-1];
                break;
            }
        }
        else {
            to_pass-=s[i]-'0';
            if(to_pass<=0) {
                cout << s[i-1];
                break;
            }
        }
    }
}
