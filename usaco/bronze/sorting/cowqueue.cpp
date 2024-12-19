#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    
    int n;cin>>n;
    pair<int,int> cow[n];
    for (int i = 0; i < n; i++)
    {
        cin>>cow[i].first>>cow[i].second;
    }

    sort(cow, cow+n);

    // berarti kita hitung tu butuh waktu sampe jam ke berapa kan
    // kita urutin dulu  kalau udah urut nanti tambah waktunya 2+1 = 3 
    // karena nilai selanjutnya lebih dari 3 ya hiraukan ganti tiga dengan nilai selanjutnya 5+7 = 12
    // karena nilai selanjutnya itu 8, dan lapan ini kurang dari 12 maka tambahin aja nilai 8 yaitu 3

    int jam=cow[0].first+cow[0].second;
    for (int i = 1; i < n; i++)
    {
        if(cow[i].first>=jam) {
            jam=cow[i].first+cow[i].second;
        }
        else {
            jam+=cow[i].second;
        }
    }
    
    cout << jam;
}
