#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zero = count(s.begin(),s.end(),'0');
        int one = s.size() - zero;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(one) one--;
                else break;
            }
            else{
                if(zero) zero--;
                else break;
            }
        }
        cout<<one + zero<<"\n";
    }
    return 0;
}