#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10] = {7, 4, 5, 0, 2, 3, 8, 1, 9, 6};
    int sebelum = 0;
    for(int i = 0; i < 10; i++) {
     sebelum += a[i];
    }
    cout <<a[a[a[a[a[a[a[7]]]]]]]<<endl;
    a[a[a[a[a[a[a[7]]]]]]] = a[a[a[a[a[a[a[6]]]]]]];
    int setelah = 0;
    for(int i = 0; i < 10; i++) {
     setelah += a[i];
    }
    int ans = setelah - sebelum;
    cout <<a[a[a[a[a[a[a[6]]]]]]]<<endl;
}
