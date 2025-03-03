#include <bits/stdc++.h>

using namespace std;

struct p {
    long long a, ab; int index;
};

bool sorter(p &p1, p &p2) {
    long long a=p1.a*p2.ab;
    long long b=p2.a*p1.ab;
    // kalau ada yang sama
    if(a!=b) {
        return a>b;
    }
    else {
        return p1.index<p2.index;
    }
}

void solve() {
    int n;cin>>n;
    // tuple<long long, long long, int> ab_index[n];
    p orang[n];
    for(int i=0;i<n;i++) {
        cin>>orang[i].a;
        long long b;cin>>b;
        orang[i].ab=orang[i].a+b;
        orang[i].index=i+1;
    }
    sort(orang, orang+n, sorter);

    for(int i=0;i<n;i++) {
        cout << orang[i].index << " "; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
