#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;cin>>n>>k;
    int a[n];
    cin >> a[0];
    for(int i=1;i<n;i++){
        int x;
        cin >>x;
        a[i]=a[i-1]+x;
    }
    while(k--){
        int x;cin>>x;
        int l=0;
        int r=n-1;
        int res=n;
        while(l<=r) {
            int mid =(l+r)/2;
            if (a[mid]>=x){
                res=mid;
                r=mid-1;
                
            }
            else l=mid+1;
        }
        if(a[res]==x) {
            cout << res+1<< endl;
        }
        else cout << res << endl;
    }
}
