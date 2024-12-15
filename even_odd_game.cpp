#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        
        long long alice=0,bob=0;
        for(int i=0;i<n;i++){
            if(i%2==0){ //alice turn
                if(arr[i]%2==0){
                    //even  num
                    alice+= arr[i];
                }
            }
            else{
                if(arr[i]%2==1){
                    bob+=arr[i];
                }
            }
        }
        
        if(alice>bob){
            cout<<"Alice"<<"\n";
        }
        else if(bob>alice){
            cout<<"Bob"<<"\n";
        }
        else{
            cout<<"Tie"<<"\n";
        }
        
    }
    return 0;
}