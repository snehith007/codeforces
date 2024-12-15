#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = 1;
        while(str.size() > 1)
        {
            if(str.front() != str.back())
            {
                str.erase(str.begin());
                str.pop_back();
            }
            else
                break;
        }
        cout << (int)str.size() << '\n';

    }
    return 0;
    
}