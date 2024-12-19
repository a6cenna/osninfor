#include <bits/stdc++.h>

using namespace std;

int N, K;
int hasil[10]; 

void coba(int kedalaman) {
    if (kedalaman > K) {
        for(int i=1;i<=K;i++) {
            cout << hasil[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = hasil[kedalaman - 1] + 1; i <= N; i++) {
            hasil[kedalaman] = i;   
            coba(kedalaman + 1);    
        }
    }
}

int main() {
    cin >> N >> K;
    hasil[0] = 0; 
    coba(1);      
    return 0;
}
