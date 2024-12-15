#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        
        vector<ll>arr(n+ 1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        vector<ll>psum(n+ 1);
        for(int i=1;i<=n;i++){
            psum[i] = psum[i- 1] + arr[i];
        }
        
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long sum = psum[l- 1]+ psum[n] -psum[r] + k*(r- l+ 1);
            
            if(sum%2==0){
                cout<<"NO"<<"\n";
            }
            else{
                cout<<"YES"<<"\n";
            }
        }
    }
}