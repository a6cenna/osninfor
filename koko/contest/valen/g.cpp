#include <bits/stdc++.h>

using namespace std;

// pen mati soal mudah gini kok gabisa kocak

void solve() {
    long long n,m;cin>>n>>m;
    // cari mod dari masing2?
    long long b[n], k[n];
    for(long long i=0;i<n;i++) {
        cin>>b[i];
    }
    for(long long i=0;i<n;i++) {
        cin>>k[i];
    }

    long long ans=0;

    long long freq0[m]={0};
    long long freq1[m]={0};

    for(long long i=0;i<n;i++) {
        long long sisa=b[i]%m;
        if(k[i]==1) {
            freq1[sisa]++;
        }
        else {
            freq0[sisa]++;
        }
    }

    for(long long i=0;i<m;i++) {
        ans+=freq0[i]*freq1[(m-i)%m];
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
