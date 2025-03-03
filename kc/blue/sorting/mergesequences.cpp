#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int la=0,lb=0;
    int count=1;
    while(la<n || lb<m) {
        if((a[la]<b[lb] || lb>=m) && la<n) {
            a[la]=count;
            la++;
        }
        else {
            b[lb]=count;
            lb++;
        }
        count++;
    }

    for(int i=0;i<n;i++) cout<< a[i] << ' ';
    cout << '\n';
    for(int i=0;i<m;i++) cout<< b[i] << ' ';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
