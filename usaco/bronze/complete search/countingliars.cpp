#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;

    vector<int> G;
    vector<int> L;

    while(n--) {
        char c;cin>>c;
        int p;cin>>p;

        if(c=='G') {
            G.push_back(p);
        }
        else if(c=='L') {
            L.push_back(p);
        }
    }
    sort(L.begin(), L.end());
    sort(G.begin(), G.end());

    int liar=INT_MAX;
    for(auto pivot: G) {
        int minpiv=0;
        for(auto l:L) {
            if(pivot > l) {
                minpiv++;
            }
        }
        for(auto g:G) {
            if(pivot < g) {
                minpiv++;
            }
        }

        liar=min(liar, minpiv);
    }
    for(auto pivot: L) {
        int minpiv=0;
        for(auto l:L) {
            if(pivot > l) {
                minpiv++;
            }
        }
        for(auto g:G) {
            if(pivot < g) {
                minpiv++;
            }
        }

        liar=min(liar, minpiv);
    }

    cout << liar;
}
