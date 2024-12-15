#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll mn1 =inf,mn=inf;
        ll sum =0;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<ll> arr(m);
            for(auto &i:arr){
                cin>>i;
            }
            sort(arr.begin(),arr.end());
            sum+=arr[1];
            if(arr[1]<mn1){
                mn1=arr[1];
            }
            mn = min(mn,arr[0]);
        
        }
        cout<<sum-mn1+min(mn1,mn)<<"\n";
        
    }
    return 0;
}