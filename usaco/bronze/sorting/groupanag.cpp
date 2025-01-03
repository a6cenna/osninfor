#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        vector<vector<string>> ans;

        for(int i=0;i<strs.size();i++) {
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            group[temp].push_back(strs[i]);
        }
        for(auto a:group) {
            ans.push_back(a.second);
        }

        return ans;
    }
};
