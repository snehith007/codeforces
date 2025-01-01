#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    int sum =0;
    int sum_min =INT_MAX;
    
    int index=0;
    int answerIndex=0;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        
        if(i-index+ 1==k){
            if(sum<sum_min){
                answerIndex=index;
                sum_min=sum;
            }
            sum-=arr[index];
            index++;
        }
    }
    cout<<(answerIndex+ 1)<<"\n";
    
}