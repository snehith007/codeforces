#include<bits/stdc++.h>

using namespace std;
int main()
{
   
    int n;
    cin >> n;
    string str;
    cin >> str;
    char mx = str[0];
    int pos = 0;
    for(int i = 1; i < n; i++)
    {

        if(str[i] < mx)
        {
            cout << "YES" << '\n';
            cout << pos + 1 << ' ' << i + 1;
            return 0;
        }
        else
        {
            mx = str[i];
            pos = i;
        }
    }
    cout << "NO" << '\n';
    return 0;
}