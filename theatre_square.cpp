#include<bits/stdc++.h>
using namespace std;

int main(){
    
    unsigned long long n,m,a,ans;
    cin>>n>>m>>a;
    
    if(a>=m && a>=n){
        cout<<1<<"\n";
    }
    else{
        ans = ceil((double)m/a) *ceil((double)n/a);
        cout<<ans<<"\n";
    }
    return 0;
}