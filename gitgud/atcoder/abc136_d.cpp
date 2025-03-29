// author: sofwant || a6cenna
// created at 29/03/2025
// suffering leaves suffering leaves.

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    string s;cin>>s;
    int ans[s.length()] = {0};
    for(int i=0;i<s.length()-1;i++) {
        if(s[i]=='R'&&s[i+1]=='L') {
            int count_r=0;
            int count_l=0;
            int temp=i;
            while(temp>=0&&s[temp]=='R') {
                count_r++;
                temp--;
            }
            temp=i+1;
            while(temp<s.length()&&s[temp]=='L') {
                count_l++;
                temp++;
            }
            ans[i]=(count_r+1)/2+count_l/2;
            ans[i+1]=count_r/2+(count_l+1)/2;
        }
    }
    for(int i=0;i<s.length();i++) {
        cout << ans[i] << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
