#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    string result;
    
    for(int i=0;i<s.length();i++){
        if(s[i]!='A' && s[i]!='O' && s[i]!='Y' && s[i]!='E' && s[i]!='U' && s[i]!='I' && s[i]!='a' && s[i]!='o' &&s[i]!='y' &&s[i]!='e' &&s[i]!='u' &&s[i]!='i'){
        
        result +='.';
        result+= (char)tolower(s[i]);
        
    }
        
    }
    cout<<result<<"\n";
    
    
}