#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> stack;
    while(n--) {
        string s;cin>>s;
        
        if(s=="add") {
            int x,y;cin>>x>>y;
            for(int i=0;i<y;i++) {
                stack.push_back(x);
            }
            cout << stack.size() << '\n';
        }
        else if(s=="del") {
            int y;cin>>y;
            cout << stack[stack.size()-1] << '\n';
            for(int i=0;i<y;i++) {
                stack.pop_back();
            }
        }
        else if(s=="adx") {
            int d;cin>>d;
            for(int i=0;i<stack.size();i++) {
                stack[i]+=d;
            }
        } 
        else {
            int d;cin>>d;
            for(int i=0;i<stack.size();i++) {
                stack[i]-=d;
            }
        } 
    }
}

int main() {
    solve();
}
