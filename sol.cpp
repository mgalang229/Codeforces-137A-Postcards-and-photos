#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
  string s;
  cin >> s;
  int n = (int) s.size();
  int ans = 0;
  // create segments with the same characters (but only up to 5)
  for (int i = 0; i < n; i++) {
  	int j = i;
  	int cnt = 0;
  	while (s[i] == s[j] && j < n && cnt < 5) {
  		cnt++;
  		j++;
  	}
  	i = j - 1;
  	ans++;
  }
  cout << ans << '\n';
  return 0;
}
