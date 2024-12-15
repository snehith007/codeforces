#include<bits/stdc++.h>
using namespace std;
int main(){
    string n,t;
    cin>>n>>t;
    
    if(stoi(n) < t.length()){
        cout<<-1<<"\n";
        return 0;
    }
    cout<<t;
    for(int i=0;i<stoi(n) - t.length();i++){
        cout<<0;
    }
    return 0;
}