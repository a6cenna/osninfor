#include <bits/stdc++.h>

using namespace std;

struct point {
    int w,x,id;
};

bool comparator (point &p1, point &p2) {
    return p1.w < p2.w;
}

bool comparator1 (point &p1, point &p2) {
    return p1.x < p2.x;
}

void solve() {
    int n,m;cin>>n>>m;

    point points[m];
    vector<point> used;

    for(int i=0;i<m;i++) {
        cin>>points[i].x>>points[i].w;
        points[i].id=(i+1);
    }
    sort(points, points+m, comparator);
    int sum=0;
    for (int i = 0; i < n*2; i++)
    {
        used.push_back(points[i]);
        sum+=points[i].w;
    }
    cout << sum << '\n';
    sort(used.begin(), used.end(), comparator1);
    for (int i = 0; i < n; i++)
    {
        cout << used[i].id << " " << used[n*2-i-1].id << '\n';
    }
    
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
