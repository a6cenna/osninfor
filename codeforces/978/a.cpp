#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0;i<t;i++) {
        int n,r, minRow;
        cin >> n >> r;

        int pairs=0;
        int single=0;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            pairs+=floor(x/2);
            single+=x%2;
        }        

        minRow=pairs+single;

        if (minRow <= r)
        {
            cout << 2*pairs+single << endl;
        }
        else {
           cout << 2*pairs + (r-pairs)*2-single << endl;
        }
    }
}
