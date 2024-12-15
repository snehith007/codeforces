#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>ans;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans[x]++;
        }
        bool ok = true;
        if(ans.find(k)== ans.end()) ok = false;
        cout<<(ok?"YES": "NO")<<"\n";
    }
    return 0;
}