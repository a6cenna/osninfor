#include <bits/stdc++.h>

using namespace std;

string s;
vector<char> permutation;
vector<string> result;
vector<bool> chosen;

void search() {
    if(permutation.size()==s.length()) {
        string a;
        for(int i=0;i<s.length();i++) {
            a+=permutation[i];
        }
        result.push_back(a);
    }
    else {
        for (int i = 0; i < s.length(); i++)
        {
            if(chosen[i]) continue;
            if (i > 0 && s[i] == s[i - 1] && !chosen[i - 1]) continue;

            chosen[i]=true;
            permutation.push_back(s[i]);
            search();
            chosen[i]=false;
            permutation.pop_back();
        }
        
    }
}


int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    
    cin>>s;
    sort(s.begin(), s.end());

    chosen.resize(s.length());
    fill(chosen.begin(), chosen.end(), false);
    search();
    cout << result.size() << '\n';
    for(int i=0;i<result.size();i++) {
        cout << result[i] << '\n';
    }
}
