#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    pair<int, int> ab[n];

    for(int i=0;i<n;i++) {
        cin>> ab[i].second >> ab[i].first;
    }
    sort(ab, ab+n);
    int count=0;
    int hour=0;
    for(int i=0;i<n;i++) {
        if(hour <= ab[i].second) {
            hour=ab[i].first;
            count++;
        }
    }

    cout << count;
}
