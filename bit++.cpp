#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t, ans = 0;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if (s[1] == '+')
            ans++;
        else
            ans--;
    }
    cout << ans;
}