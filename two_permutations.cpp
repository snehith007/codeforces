#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        bool ans = false;
        int n,a,b;
        cin>>n>>a>>b;
        
        if(n==a & a==b){
            ans = true;
        }
        else if(a+b < n - 1){
            ans = true;
        }
        cout<< (ans?"Yes":"No")<<"\n";
    }
}