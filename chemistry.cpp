#include<bits/stdc++.h>

using namespace std;

int main(){
    
     int t;
    cin >> t;
    while(t--)
    {
      int n, k;
      cin >> n >> k;
      string str;
      cin >> str;
      vector<int> freq(26);
      for (auto& i: str) {
        freq[i - 'a']++;
      }

      int cnt = 0;
      for (auto& i: freq) {
        cnt += (i & 1);
      }
      cnt -= k;
      bool ok = true;
      if(cnt > 1) {
        ok = false;
      }

      cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}