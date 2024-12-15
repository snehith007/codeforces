#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        
        string s;
        cin >> s;

        // Extend `s` by appending it to itself
        s.append(s);

        int ans = -1e9;
        int last = -1;

        // Process the extended string
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'g') last = i;
            if (s[i] == c && last != -1) ans = max(ans, last - i);
        }

        cout << ans << "\n"; // Output result for each test case
    }
    return 0;
}
