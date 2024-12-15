
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long total =b;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            total+=min(a - 1,x);
        }
        cout<<total<<"\n";
    }
    return 0;
}