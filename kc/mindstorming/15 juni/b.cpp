// author: sofwant || a6cenna

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
    int n,h;cin>>n>>h;

    vector<int> pref(h+1, 0);
    vector<int> suff(h+2, 0);

    int a[n];

    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(i%2==0) {
            pref[1]+=1;
            pref[a[i]+1]-=1;
        }
    }

    for(int i=1;i<n;i+=2) {
        suff[h+1]+=1;
        suff[h-a[i]]-=1;
    }
    
    for(int i=1;i<=h;i++) {
        pref[i]+=pref[i-1];
    }

    for(int i=h;i>=1;i--) {
        suff[i]+=suff[i+1];
    }

    for(int i=1;i<=h;i++) {
        pref[i]+=suff[i];
    }


    int ans=INT_MAX;
    int level=0;
    for(int i=1;i<=h;i++) {
        ans=min(ans, pref[i]);
    }
    for(int i=1;i<=h;i++) {
        if(pref[i]==ans) level++;
    }

    cout << ans << ' ' << level;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
