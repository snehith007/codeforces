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
        
        if(s[0]=='1' ||s[n- 1]=='1'){
            cout<<"YES"<<"\n";
            continue;
        }
        bool ans1 = false;
        for(int i=1;i<n;i++){
            if(s[i]==s[i -1] && s[i]=='1'){
                ans1 = true;
            }
        }
        if(ans1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}