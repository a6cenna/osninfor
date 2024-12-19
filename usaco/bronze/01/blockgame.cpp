#include <bits/stdc++.h>

using namespace std;

vector<int> count(string s) {
    vector<int> res(26);
    for(int i=0;i<s.length();i++) {
        res[s[i]-'a']++;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int n;cin>>n;
    int nn=n;
    int maxi[26]={0};
    pair<string, string> words[n];
    for(int i=0;i<n;i++) {
        cin>>words[i].first>>words[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        vector<int> f1 = count(words[i].first);
        vector<int> f2 = count(words[i].second);

        for (int j = 0; j < 26; j++)
        {
            maxi[j]+=max(f1[j], f2[j]);
        }
        
    }
    
    for(int i=0;i<26;i++) {
        cout << maxi[i] << '\n';
    }
}
