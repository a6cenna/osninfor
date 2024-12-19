#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    int p[n];
    for(int i=0;i<n;i++) { cin>> p[i]; }

    int ans=n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int sum=0;
            for (int k = j; k <= i; k++)
            {
                sum+=p[k];
            }
            if( sum % (i-j+1)==0) {
                int avg=sum/(i-j+1);
                for (int k = j; k <= i; k++)
                {
                    if(p[k]==avg) {ans++;break;}
                }
            }
            
        }
        
    }
    
    cout << ans;
}
