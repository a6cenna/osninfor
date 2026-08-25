// war without reason

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
    int x;
    int first=-1,lst=-1;
    for(int i=0;i<n;i++) {
        cin>>x;
        if(x==1&&first==-1) first=i;
        if(x==1) lst=i;
    }
    if(lst==-1) {
        cout << 0 << '\n';
        return;
    }

    cout << lst-first << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
