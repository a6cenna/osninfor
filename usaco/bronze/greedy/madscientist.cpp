#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;
    int ans=0;
    for (int i = 0; i < n-1; i++)
    {
        if(s1[i]!=s2[i]) {
            while(s1[i+1]!=s2[i+1]) {
                i++;
            }
            ans++;
        }
    }
    cout << ans;
}
