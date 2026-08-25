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
    int n,p,q;cin>>n>>p>>q;
    vector<int> e(n); // value egonya
    for(int i=0;i<n;i++) cin>>e[i];
    vector<pii> v; // fs=egonya, sc=pertanyaan ke-x
    for(int i=0;i<q;i++) {
        int x;cin>>x;
        v.pb({e[x-1], i});
    }
    sort(e.begin(),e.end());
    sort(v.begin(),v.end());
    vector<int> ans(q, 1); // jawaban pertanyaan ke-x untuk x dari 0--(q-1)
    vector<int> L(n), mx(n); // L[i] = l yang mungkin untuk r=i, mx[n] = skor dari r-L[r]+1;
    int l=0;
    for(int r=0;r<n;r++) {
        while(e[r]-e[l]>p) l++;
        L[r]=l;
        mx[r]=r-l+1;
    }

    deque<int> dq; // index r yang valid dan paling bagus valuenya
    int R=0;
    for(int i=0;i<q;i++) { // untuk setiap pertanyaan urutan ke i dari v yang udh di sort
        while(R<n&&e[L[R]]<=v[i].fs) {
            while(!dq.empty()&&mx[dq.back()]<=mx[R]) { // apus2 in yang lebih kecil karna ga guna
                dq.pop_back();
            } 
            dq.pb(R);
            R++;
        }
        while(!dq.empty()&&e[dq.front()]<v[i].fs) dq.pop_front();
        ans[v[i].sc]=mx[dq.front()];
    }

    for(int i=0;i<q;i++) {
        cout << ans[i] << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
