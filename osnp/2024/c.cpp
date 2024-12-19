#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m;
    int n;cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int l=0;
    int r=a[n-1];
    int ans=-1;
    while (l<=r) 
    {
        int mid=(l+r)/2;
        long long temp=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>mid) {
                temp+=a[i]-mid;
            }
        }
        if(temp==m) {
            cout << mid;
            return 0;
        }
        else if(temp>m) {
            ans=max(ans, mid);
            l=mid+1;
        }
        else {
            r=mid-1;
        }

    }
    cout << ans;
}
