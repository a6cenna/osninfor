#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    int total2=0;
    vector<int> count;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        int x=a[i];
        while(x%2==0){
            x/=2;
            total2++;
        }
        x=i+1;
        int cnt=0;
        while(x%2==0){
            x/=2;
            cnt++;
        }
        count.push_back(cnt);
    }
    sort(count.begin(), count.end(), greater<int>());
    int ans=0;
    while(total2 < n && ans < n) {
        total2+=count[ans];
        ans++;
        if(total2>=n) {
            cout << ans << '\n';
            return;
        }
    }
    if(total2>=n) {
        cout << 0 << '\n';
    }
    else cout << -1 << '\n';
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
