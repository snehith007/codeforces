#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    ciin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int ans =0;
        int cnt =0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x == 0){
                cnt++;
                ans = max(ans,cnt);
            }
            else cnt =0;
        }
        cout<<ans<<"\n";
    }
    return 0;
}