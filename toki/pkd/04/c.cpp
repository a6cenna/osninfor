#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> permutation;
vector<bool> chosen;

bool isValid() {
    for (int i = 1; i < n-1; i++)
    {
        if(!((permutation[i]>permutation[i-1]&&permutation[i]>permutation[i+1]) || (permutation[i]<permutation[i-1]&&permutation[i]<permutation[i+1]))) {
            return false;
        }
    }
    return true;
}

void solve() {
    if(permutation.size()==n) {
        if(isValid()) {
            for(int i:permutation) {
                cout << i;
            }
            cout << endl;
        }
    }
    else {
        for (int i = 1; i <= n; i++)
        {
            if (chosen[i]) continue;
            chosen[i]=true;
            permutation.push_back(i);
            solve();
            chosen[i]=false;
            permutation.pop_back();
        }
        
    }
}

int main() {
    cin>>n;
    chosen.assign(n, false);
    solve();
}
