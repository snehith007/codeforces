#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int n = s.size();
        bool ok = true;
        ok &= !(n & 1);
        ok &= s[0]!=')';
        ok &= s[n- 1] !='(';
        
        cout<< (ok?"YES":"NO")<<"\n";
        
    }
    return 0;
}