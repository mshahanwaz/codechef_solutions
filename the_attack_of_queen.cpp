#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)
#define sz(x) (int)x.size()

int main() {
  fastIO;
  int TC = 1;
  cin >> TC;
  while (TC--) {
    int n, x, y;
    cin >> n >> x >> y;
    int diagonal = min(x - 1, y - 1) + min(x - 1, n - y) + min(n - x, y - 1) +
                   min(n - x, n - y);
    cout << 2 * (n - 1) + diagonal << endl;
  }
  return 0;
}
