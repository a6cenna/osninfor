// in the pool

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
    pair<int,string> a[n];
    for(int i=0;i<n;i++) cin>>a[i].fs>>a[i].sc;
    int ans=INT_MAX;
    int temp=0,tempall=0;
    set<char> st;
    sort(a,a+n);
    vector<pair<int,string>> v1,v2;
    for(int i=0;i<n;i++) {
        if(a[i].sc.length()==1&&!st.count(a[i].sc[0])) {
            st.insert(a[i].sc[0]);
            temp+=a[i].fs;
        }
        if(a[i].sc.length()==2) v2.pb(a[i]);
        if(a[i].sc.length()==1) v1.pb(a[i]);
        if(a[i].sc.length()==3&&tempall==0) tempall=a[i].fs; 
    }
    if(st.count('A')&&st.count('B')&&st.count('C')) ans=temp;
    if(tempall!=0) ans=min(ans, tempall);

    if(v2.empty()) {
        cout << (ans==INT_MAX?-1:ans);return;
    }

    for(int i=0;i<v2.size();i++) {
        map<char,int> mp;
        for(auto c:v2[i].sc) mp[c]++;
        int sum=v2[i].fs;
        for(int j=i+1;j<v2.size();j++) {
            for(auto c:v2[j].sc) mp[c]++;
            if(mp['A']&&mp['B']&&mp['C']) ans=min(ans, sum+v2[j].fs);
            for(auto c:v2[j].sc) mp[c]--;
        }
        for(int j=0;j<v1.size();j++) {
            for(auto c:v1[j].sc) mp[c]++;
            if(mp['A']&&mp['B']&&mp['C']) ans=min(ans, sum+v1[j].fs);
            for(auto c:v1[j].sc) mp[c]--;
        }
    }

    cout << (ans==INT_MAX?-1:ans) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
