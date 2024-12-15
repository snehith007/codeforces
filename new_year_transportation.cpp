
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,t;
    cin>>n>>t;
    vector<int>arr(n + 5);
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    bool ans = false;
    
    for(int i=1;i<n && i<=t;){
        ans |= (i == t);
        i+= arr[i];
        ans |= (i == t);
    }
    cout<<(ans ? "YES": "NO")<<"\n";
    return 0;
}