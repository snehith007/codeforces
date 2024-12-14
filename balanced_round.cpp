#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(auto& i:arr){
            cin>>i;
        }
        sort(arr.begin(),arr.end());
        
        int temp=1;
        int ans =1;
        for(int i=0;i<n - 1;i++){
            if(abs(arr[i] - arr[i + 1])<=k){
                temp++;
                ans = max(ans,temp);
            }else{
                temp=1;
            }
        }
        cout<<n-ans<<"\n";
    }
    return 0;
}
