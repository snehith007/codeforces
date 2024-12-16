#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag = true;
    
    for(int i=1;i<s.length();i++){
        if(s[i]>=97){
            flag = false;
            break;
        }
    }
    if(flag){
        for(int i=0;i<s.length();i++){
            if(s[i]>=97){
                s[i] = s[i] - 32;
            }
            else{
                s[i] = s[i] + 32;
            }
        }
        cout<<s;
    }
    else{
        cout<<s;
    }
}