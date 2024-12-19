#include <iostream> 

using namespace std;

int main() {
    int N;
    cin >> N;
    
    cout << '*' << endl;
    if (N>1) {
        for (int i=0;i<N;i++) {
            for (int j = N; j<N-i;j--) {
                cout << '*';
            }
            cout << endl;
        cout << '*' << endl;
        }
    }
    
    
    return 0;
}
