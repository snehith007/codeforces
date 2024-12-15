#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt2=0,cnt3=0;
        while(n%2==0){
            n=n/2;
            cnt2++;
        }
        while(n%3==0){
            n=n/3;
            cnt3++;
        }
        if(n != 1) {
            cout << "-1" << "\n";
        }

        else if(cnt2 <= cnt3) {
            cout << (cnt3 - cnt2) + cnt3 << "\n";
        } 
        else {
            cout << "-1" << "\n";
        }
    }
    
    return 0;
}