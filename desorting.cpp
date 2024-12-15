#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans =INT_MAX;
        bool sorted = true;
        for(int i=0;i<n - 1;i++){
            if(arr[i + 1] >= arr[i]){
                ans = min(ans,arr[i + 1] -arr[i]);
            }
            else{
                sorted = false;
            }
            
        }
        if(!sorted){
            cout<<0<<"\n";
        }
        else{
            cout<< (ans + 2)/2<<"\n";
        }
        
    }
    return 0;
}