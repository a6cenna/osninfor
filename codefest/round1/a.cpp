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
    int n;cin>>n;
    int time[n+1];
    for(int i=1;i<=n;i++)cin>>time[i];

    vector<int> pref(n+2, 0);
    for(int i=1;i<=n;i++) {
        int awal=i%n+1;
        int akhir=(i-1-time[i]+n)%n+1;
        if(awal<=akhir) {
            pref[awal]+=1;
            pref[akhir+1]-=1;
        }
        else { // muter
            pref[awal]+=1;
            pref[n+1]-=1;
            pref[1]+=1;
            pref[akhir+1]-=1;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        pref[i]+=pref[i-1];
    }
    for(int i=1;i<=n;i++) {
        int maxi=max(pref[i], pref[ans]);
        if(pref[ans]!=maxi) ans=i;
    }

    cout << ans;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
