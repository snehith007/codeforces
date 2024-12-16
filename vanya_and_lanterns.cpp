#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    
    int diff = 2* max(arr[0],l-arr[n- 1]);
    
    for(int i=0;i<n;i++){
        diff = max(diff,arr[i]-arr[i- 1]);
    }
    cout<<fixed<<setprecision(9)<<(double) diff/2;
}