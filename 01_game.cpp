#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int cnt_zero = count(s.begin(),s.end(),'0');
        int cnt_one = size(s)-cnt_zero;
        int moves = min(cnt_zero,cnt_one);
        
        if(moves%2==0){
            cout<<"NET"<<"\n";
        }
        else{
            cout<<"DA"<<"\n";
        }
    }
    return 0;
    
}
