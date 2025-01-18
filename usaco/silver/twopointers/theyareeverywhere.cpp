#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    char flats[n];
    set<char> type;

    for(int i=0;i<n;i++) {
        cin>>flats[i];
        type.insert(flats[i]);
    }

    int ans=INT_MAX;
    map<char,int> curr;
    int l=0;
    for(int r=0;r<n;r++) {
        curr[flats[r]]++;
        while(l+1<=r && curr[flats[l]]>1) {
            curr[flats[l]]--;
            l++;
        }
        if(curr.size() == type.size()) {
            ans=min(ans, r-l+1);
        }
    }

    cout << ans;
}
