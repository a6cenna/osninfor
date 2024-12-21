#include <bits/stdc++.h>

using namespace std;

vector<int> stall;

int m;
vector<array<int, 4>> ac;
vector<array<int, 3>> cow;

int minim = INT_MAX;

void search(int n, int left, int p)
{
    // n is the remaining stall that isnt filled (>0)
    // left is the ac left
    // p is the cost
    if (n == 0)
    {
        minim = min(minim, p);
        return;
    }
    if (left == 0)
    {
        return;
    }
    // how to search it? use ac or skip it (?)
    // check if we use and check if we skip the ac
    search(n, left - 1, p);

    int filled = n;

    vector<int> temp(stall.size());

    bool ngaruh = false;
    for (int i = ac[left-1][0] - 1; i < ac[left-1][1]; i++) {
        temp[i]=stall[i];
        if (stall[i] != 0) {
            stall[i] = max(0, stall[i] - ac[left-1][2]);
            if (stall[i] == 0) {
                filled--;
            }
            ngaruh=true;
        }
    }
    if(ngaruh) {
        search(filled, left - 1, p + ac[left - 1][3]);
    }
    for (int i = ac[left - 1][0] - 1; i < ac[left - 1][1]; i++)
    {
        stall[i] = temp[i];
    }
}

int main()
{
    int n;
    cin >> n >> m;

    cow.resize(n);
    ac.resize(m);

    int maxs = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> cow[i][0] >> cow[i][1] >> cow[i][2];
        maxs = max(cow[i][1], maxs);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> ac[i][0] >> ac[i][1] >> ac[i][2] >> ac[i][3];
    }
    // we spam the ac until all stall was < 1, we check if stall[i]<1 fill--;
    stall.resize(maxs);
    fill(stall.begin(), stall.end(), 0);
    for (auto c : cow)
    {
        for (int i = c[0] - 1; i < c[1]; i++)
        {
            stall[i] = max(stall[i], c[2]);
        }
    }
    int filled = 0;
    for (int i = 0; i < maxs; i++)
    {
        if (stall[i] > 0)
        {
            filled++;
        }
    }

    search(filled, m, 0);

    cout << minim;
}
