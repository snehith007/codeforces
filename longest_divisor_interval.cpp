#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long cnt =1;
        while(n%cnt==0) cnt++;
        cout<<--cnt<<"\n";
    }
    return 0;
}