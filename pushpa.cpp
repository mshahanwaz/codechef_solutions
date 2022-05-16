#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using mii = map<int, int>;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

int main() {
  fastIO;
  int TC = 1;
  cin >> TC;
  while (TC--) {
    int n;
    cin >> n;
    mii cnt;
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      cnt[x]++;
    }
    int mx = 0;
    for (auto x : cnt) {
      mx = max(mx, x.first + x.second - 1);
    }
    cout << mx << endl;
  }
  return 0;
}
