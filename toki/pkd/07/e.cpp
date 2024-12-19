// coba cek kita milih huruf itu atau nggak

// kalau palindrom + 2;
// hasil rekursi max(dp(i+1), dp(i)); cek udah dipilih belum

// salah, cek substring dari string sampe terkecil 1 huruf = palindrom
// base case string tinggal 1 huruf -> palindrome

// coba cara iterative buat tabel n*n dengan n panjang string
// jika i=j maka isi 1 (base case)

// take away
// kalau s[i]=s[j] tambah 2 dari string yang diantaranya (fungsi dp disini)
// kalau nggak sama kita cari maksimalnya dari sub string kalau gak ada i atau kalau elemen ke j ga ikut (karena disini berarti panjangan palindrom yang kita pilih antara i+1 sampai j atau i sampai j-1)

#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;cin>>s;
    int len=s.length();
    vector<vector<int>> dp(len, vector<int>(len, 0));
    for (int i = 0; i < len; i++)
    {
        dp[i][i]=1;
    }
    for (int d = 1; d < len; d++)
    {
        for(int i=0; i<len-d;i++){
            int j = d+i;
            if(s[i]==s[j]) {
                dp[i][j]=dp[i+1][j-1]+2;
            }
            else {
                dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
            }
        }
    }
    cout << dp[0][len-1] << '\n';
}

int main() {
    int t;cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}
