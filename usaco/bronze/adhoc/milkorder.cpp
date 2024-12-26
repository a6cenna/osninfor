#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    int n,m,k;cin>>n>>m>>k;
    int h[m];
    bool isH=false;
    for (int i = 0; i < m; i++)
    {
        cin>>h[i];
        if(h[i]==1) {
            isH=true;
        }
    }
    vector<int> ans(n+1, -1);
    set<int> added;
    map<int,int> mp; // cow, index
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        if(x==1) {
            cout << y;
            return 0;
        }
        ans[y] = x;
        added.insert(x);
        mp[x]=y;
    }
    // for(int i=m-1;i>=0;i--) {
    //     if(added.count(h[i])) continue;
    //     for (int j = n; j >= 1; j++)
    //     {
    //         if(ans[j]!=-1) {
    //             ans[j]=h[i];
    //             added.insert(h[i]);
    //         }
    //     }
    // }

    // if 1 is in hierarchy
    if(isH) {
        int pos=1;
        for (int i = 0; i < m; i++)
        {
            if(added.count(h[i])) {
                pos=mp[h[i]];
                continue;
            }
            for(int j=pos;j<=n;j++) {
                if(ans[j]==-1) {
                    ans[j]=h[i];
                    pos=j;
                    break;
                }
            }
            if(h[i]==1) {
                cout << pos;
                return 0;
            }
        }
    }
    else {
        int pos=n;
        for (int i = m-1; i >= 0; i--)
        {
            if(added.count(h[i])) {
                pos=mp[h[i]];
                continue;
            }
            for (int j = pos; j > 0; j--)
            {
                if(ans[j]==-1) {
                    ans[j]=h[i];
                    pos=j;
                    break;
                }
            }
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        if(ans[i]==-1) {
            cout << i;
            break;
        }
    }
}
