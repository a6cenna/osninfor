#include <bits/stdc++.h>

using namespace std;

int k;

pair<int,int> wh[100];
bool comp[101][2001];
int memo[101][2001];
bool picked[101][2001];

int dp(int i, int c) {
    if(i==0 || c==0) return 0;
    if(comp[i][c]) return memo[i][c];
    int best = dp(i-1, c);
    if(c>=wh[i-1].first) {
        int include = dp(i-1, c-wh[i-1].first)+wh[i-1].second;
        if(include>best) {
            best = include;
            picked[i][c]=true;
        }
    }
    comp[i][c] = true;
    memo[i][c]=best;
    return best;
}

int main() {
    int n;cin>>n>>k;
    for (int i=0;i<k;i++) {
        cin >> wh[i].first >> wh[i].second;
    }
    dp(k, n);
    vector<int> selected;
    int remainingWeight = n;

    for (int i = k; i > 0; i--) {
        if (picked[i][remainingWeight]) {
            selected.push_back(i);             
            remainingWeight -= wh[i - 1].first; 
        }
    }
    sort(selected.begin(), selected.end());
    for(int a:selected) {
        cout << a << endl;
    }
}
