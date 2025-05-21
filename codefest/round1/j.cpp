#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve(int num) {
    cout << "Case " << num << ":\n";
    stack<string> stck;
    stack<string> stck1;
    stck.push("http://www.lightoj.com/");
    while(true) {
        string c;cin>>c;
        if(c=="QUIT") break;
        if(c=="VISIT") {
            string web;cin>>web;
            stck.push(web);
            stck1=stack<string>();
            cout << stck.top() << '\n';
        }
        if(c=="BACK") {
            if(stck.size()<2) {
                cout << "Ignored" << '\n';
                continue;
            }
            stck1.push(stck.top());
            stck.pop();
            cout << stck.top() << '\n';
        }
        if(c=="FORWARD") {
            if(stck1.empty()) {
                cout << "Ignored" << '\n';
                continue;
            }
            stck.push(stck1.top());
            stck1.pop();
            cout << stck.top() << '\n';
        }
    }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    for(int i=1;i<=t;i++) {
        solve(i);
    }
}
