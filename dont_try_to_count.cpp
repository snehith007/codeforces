#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        bool ok = false;
        for (int i = 1; i <= 8; i++) {
            if(a.find(b) != string::npos) {
                cout << --i << '\n';
                ok = true;
                break;
            }
            a += a;
        }
        if(!ok) {
            cout << -1 << '\n';
        }
    }
    return 0;
    
}