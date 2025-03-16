#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m,k;cin>>n>>m>>k;
    // cek kalau sama dengan yang ada lubang
    bool lubang[n+1]={0};
    bool bola[n+1]={0};
    bola[1]=1;
    for (int i=0;i<m;i++)
    {
        int h;cin>>h;
        lubang[h]=1;
    }
    // simulasiin tulang
    bool jatuh=false;
    if(lubang[1]) {
        jatuh=true;
    }
    for(int i=0;i<k;i++) {
        int u,v;cin>>u>>v;
        if(jatuh) continue;
        if (bola[u] || bola[v]){
            int temp=bola[u];
            bola[u]=bola[v];
            bola[v]=temp;
            if(lubang[v] || lubang[u]) {
                jatuh=true;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        if(bola[i]) {
            cout << i;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
