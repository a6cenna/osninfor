#include <bits/stdc++.h>

using namespace std;

void solve() {
    // cari yang lebih banyak daripada kevin
    // selain itu dia rank 1
    int n,m;cin>>n>>m;
    int kevin;cin>>kevin;
    vector<int> jago;
    for (int i = 1; i < n; i++)
    {
        int x;cin>>x;
        if(x>kevin) jago.push_back(x);
    }
    int kevin_bisa=0;
    vector<int> jago_bisa;
    for (int i = 0; i < m; i++)
    {
        int x;cin>>x;
        if(kevin>=x) kevin_bisa++;
        else {
            int berapa=0;
            for(auto j : jago) {
                if(j>=x) berapa++;
            }
            if(berapa==0) kevin_bisa++;
            else {
                jago_bisa.push_back(berapa);
                // cout << "dbg " << berapa << endl;
            }
        }
    }
    sort(jago_bisa.begin(), jago_bisa.end());
    for (int k = 1; k <= m; k++)
    {
        int berapa_contest = m/k;
        int rank_kevin;
        int temp=0;
        if(kevin_bisa%k!=0) temp+=kevin_bisa%k;
        if(kevin_bisa>=k) {
            rank_kevin=kevin_bisa/k;
            berapa_contest-=kevin_bisa/k;
        }
        else {
            temp=0;
            rank_kevin=1;
            rank_kevin+=jago_bisa[k-kevin_bisa-1];
            cout << rank_kevin << " ";
            continue;
        }
        int at=0;
        while (berapa_contest>0)
        {
            if(temp>0) {
                // if(k-temp>=jago_bisa.size()) {
                //     rank_kevin+=jago_bisa[jago_bisa.size()-1]+1;
                //     temp=0;
                //     berapa_contest--;
                // }
                // else {
                    rank_kevin+=jago_bisa[k-temp]+1;
                    temp=0;
                    berapa_contest--;
                // }
                
            }
            else {
                rank_kevin+=1+jago_bisa[at+k-1];
                at++;
                berapa_contest--;
            }
            // berapa_contest--;
        }
        
        cout << rank_kevin << " ";
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
