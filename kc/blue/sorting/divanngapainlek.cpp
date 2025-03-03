#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    pair<int,int> ai[n];
    for(int i=0;i<n;i++) {
        cin>>ai[i].first;
        ai[i].second=i+1;
    }
    // taruh yang pertama di kordinat 0
    // perhatiin setiap kordinat ada kebalikannya, 1 dan -1 yang jaraknya sama
    sort(ai, ai+n, greater<pair<int,int>>());
    int pos[n+1];
    pos[0]=0;

    long long time=0;
    for (int i = 0; i < n; i++)
    {
        pos[ai[i].second]=(i+2)/2; // handle case untuk kebalikan tadi
        if(i%2==1) pos[ai[i].second]=-pos[ai[i].second];
        time+=2LL*ai[i].first*abs(pos[ai[i].second]);
    }
    
    cout << time << '\n';
    for (int i = 0; i <= n; i++)
    {
        cout << pos[i] << ' ';
    }
    cout << '\n';
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
