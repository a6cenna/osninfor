#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;cin>>n>>m;
    int temp=n;
    n=min(m,n);
    m=max(m, temp);

    // kita lewatin
    // long long a=n*m-(n-1);
    // long long b=-2;
    // long long x=n-1; // the n for original
    // how about the diff?
    // long long ans=x*(2*a+b*(x-1))/2 + (m*m+m)/2;

    // cout << ans;

    // kita buang angka terbanyak sebanyak mungkin
    int masuk=n+m-1+n-1; // sisa angka yang bisa
    vector<int> a;
    long long ans=0;
    // sekarang untuk yang dibuat kebawah berarti angka yang sisa dari 1-masuk angka terbesar
    for (int i = 1; i < masuk+1; i++)
    {
        a.push_back(i);
        ans+=i;
    }
    int perlu=n-1; // buat kebawah
    while(perlu--) {
        a.pop_back(); // kita ambil yang terbesar biar bisa ke jalur yg diinginkan
        ans-=a[a.size()-1];
        a.pop_back();
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
