#include <bits/stdc++.h>

using namespace std;

vector<int> stall;

int m;
vector<array<int, 4>> ac(m);

int minim=INT_MAX;

void search(int n, int left,int p) {
    if(n==0&&left==0) {
        minim=min(minim, p);
    }
    if(left==0) {
        return;
    }
    // code for dp
}

int main() {
    int n;cin>>n>>m;

    vector<array<int, 3>> cow(n);
    vector<array<int, 4>> ac(m);

    int maxs=0;
    for(int i=0;i<n;i++) {
        cin >> cow[i][0]>>cow[i][1]>>cow[i][2];
        maxs=max(cow[i][1], maxs);
    }
    // we spam the ac until all stall was < 1, we check if stall[i]<1 fill--;
    stall.resize(maxs);
    int filled=maxs;
    fill(stall.begin(), stall.end(), 0);
    for(auto c:cow) {
        for(int i=c[0]-1;i<c[1];i++) {
            stall[i]=max(stall[i], c[2]);
        }
    }
    for (int i = 0; i < maxs; i++)
    {
        if(stall[i]==0) filled--;
    }
    search(filled, m, 0);
}
