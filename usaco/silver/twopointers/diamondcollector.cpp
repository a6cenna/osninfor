#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("filename.in", "r", stdin);
    // freopen("filename.out", "w", stdout);

    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    int l=0, r=0, curr=0;
    int ans=0;
    set<int> st;
    while(l<n && r<n) {
        while(r<n && curr<k) {
            curr=a[r]-a[l];
            if(curr>k) {
                break;
            }
            else if (l!=r) {
                if(!st.count(l)) {
                    st.insert(l);
                    ans++;
                }
                if(!st.count(r)) {
                    st.insert(r);
                    ans++;
                }
            }
            r++;
        }
        l++;
    }

    cout << ans;
}
