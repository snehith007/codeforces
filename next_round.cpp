#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,pos;
    cin>>n>>pos;
    
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   int pos_holder = arr[pos- 1];
   int ans =0;
   
   for(int i=0;i<n;i++){
       if(arr[i]>=pos_holder && arr[i]>0){
           ans++;
       }
   }
   cout<<ans<<"\n";
    
    
}
