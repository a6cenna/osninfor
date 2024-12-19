#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for(auto &x: a) cin >> x;
        
        
        while(q--){
            long long l, r;
            cin >> l >> r;
            vector<long long> b(a.begin() + l - 1, a.begin() + r);
            unordered_set<long long> used;
            int left = 0;
            int right = b.size() - 1;
            bool is_possible = true;
            
            while(left <= right){
                if(b[left] == b[right] && used.find(b[left]) == used.end()){
                    used.insert(b[left]);
                    left++;
                    right--;
                }
                else if(used.find(b[left]) == used.end()){
                    long long val = b[left];
                    while(left <= right && b[left] == val){
                        left++;
                    }
                    used.insert(val);
                }
                else if(used.find(b[right]) == used.end()){
                    long long val = b[right];
                    while(left <= right && b[right] == val){
                        right--;
                    }
                    used.insert(val);
                }
                else{
                    is_possible = false;
                    break;
                }
            }
            if(is_possible){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}
