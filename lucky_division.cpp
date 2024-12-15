#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    bool ans=false;
    for(int i=0;i<14;i++){
        if(n%arr[i]==0){
            ans = true;
            break;
        }
    }
    
    if(ans){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}