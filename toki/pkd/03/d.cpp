#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin >> n;int x=n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int ans=0;
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++) {
            if(a[i]>a[i+1]) {
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                ans++;
            }
        }
    }
    cout << ans;
}
