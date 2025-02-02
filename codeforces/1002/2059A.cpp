#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int count=0;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        if(!st.count(x)) {
            st.insert(x);
            count++;
        }
    }
    set<int> st1;
    int count1=0;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        if(!st1.count(x)) {
            st1.insert(x);
            count1++;
        }
    }
    if((count>=2 && count1>=2) || (count==1 && count1>=3) || (count1==1 && count>=3) ) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
