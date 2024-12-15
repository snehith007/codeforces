#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int =0;
        
        for(int i=0;i<n;i++){
            if(s[i] =="."){
                int cnt =0;
                while(i<n && s[i]=="."){
                    cnt++;
                    i++;
                }
                if(cnt>2){
                    ans = 2;
                    break;
                }
                ans = ans+cnt;
            }
            
        }
        cout<<ans;<<"\n";
    }
    return 0;
}