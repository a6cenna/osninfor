#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> antre;
    int n;cin>>n;
    while(n--) {
        string s;cin>>s;
        if(s=="add") {
            int x,y;cin>>x>>y;
            for(int i=0;i<y;i++){
                antre.push(x);
            }
            cout << antre.size() << '\n';
        }
        else if(s=="del"){
            int y;cin>>y;
            cout << antre.front() << '\n';
            for(int i=0;i<y;i++) {
                antre.pop();
            }
        }
        else {
            stack<int> temp;
            while (!antre.empty()) {
                temp.push(antre.front());
                antre.pop();
            }
            while (!temp.empty()) {
                antre.push(temp.top());
                temp.pop();
            }
        }
    }
}
