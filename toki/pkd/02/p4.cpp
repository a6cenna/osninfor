#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a,b;cin>>a>>b;

    if(a==0) {
        cout << 0 << endl;
        return 0;
    }
    int h;
    int i=0;
    while (true)
    {
        long long x = pow(b,i);
        if(x<=a) h=i;
        else {
            break;
        }
        i++;
    }
    while (a>0)
    {
        long long x = pow(b,h);
        int count=a/x;
        cout << count;
        a -= count * x;
        h--;
        if(a==0&&x>1) {
            cout << 0;
            break;
        }
    }
    
}
