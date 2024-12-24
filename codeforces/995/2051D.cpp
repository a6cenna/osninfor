#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n,x,y;cin>>n>>x>>y;

    long long a[n];
    long long sum=0;
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    
    long long ans=0;
    for (long long i = 0; i < n-1; i++)
    {
        long long fsum=sum-a[i];
        long long top=-1,bot=-1;
        long long l=i+1;
        long long r=n-1;
        while(l<=r){
            long long mid=(l+r)/2;
            long long summ=fsum-a[mid];
            if (summ >=x) {
                top=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        l=i+1;
        r=n-1;
        while(l<=r){
            long long mid=(l+r)/2;
            long long summ=fsum-a[mid];
            if (summ<=y) {
                bot=mid;
                r=mid-1;
            }
            else l=mid+1;
        }

        if (bot == -1 || top == -1) {
            continue;
        }
        ans+=max(0ll, top-bot+1);
    }
    
    cout << ans << '\n';
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
