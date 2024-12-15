#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s,ans;
    map<string,int>mp;
    while(t--){
        
        cin>>s;
        mp[s]++;
    }
    int temp =0;
    for(auto i:mp){
        if(i.second> temp){
            temp=i.second;
            ans = i.first;
        }
    }
    cout<<ans;
}