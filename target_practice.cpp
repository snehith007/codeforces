#include<bits/stdc++.h>
using namespace  std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n =10;
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                char x;
                cin>>x;
                if(x == 'X'){
                    ans+=min({i,n-i+ 1,j,n-j+ 1});
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}