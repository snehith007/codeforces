#include<bits/stdc++.h>
using namespace std;
int main(){
  int s,n;
  cin>>s>>n;
  bool ans =true;
  vector<pair<int,int>>arr(n);
  
  for(int i=0;i<n;i++){
      cin>>arr[i].first>>arr[i].second;
  }
  sort(arr.begin(),arr.end());
  
  for(int i=0;i<n;i++){
      if(s>arr[i].first){
          s+=arr[i].second;
      }
      else{
          ans = false;
          break;
      }
  }
  if(ans){
      cout<<"YES"<<"\n";
  }
  else{
      cout<<"NO"<<"\n";
  }
}