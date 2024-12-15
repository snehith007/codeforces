#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n; 
        vector<int> arr(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        
        bool found = false;
        for(int j = 2; j < n; j++){ // changed j <= n to j < n to avoid out-of-bounds
            if(arr[j] > arr[j - 1] && arr[j] > arr[j + 1]){
                cout << "YES" << "\n";
                cout << j - 1 << " " << j << " " << j + 1 << "\n"; // added spaces between indices
                found = true;
                break; // exit the loop after finding the first valid peak
            }
        }
        
        if(!found){
            cout << "NO" << "\n";
        }
    }
    return 0;
}
