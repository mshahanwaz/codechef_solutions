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
		string s;
		cin >> s;
		bool set_bit = false, reset_bit = false;
		for (char c: s) {
			if (c == '1') set_bit = true;
			else reset_bit = true;
		}
		int ans = 0;
		if (set_bit && reset_bit) ans = min(x, y);
		cout << ans << endl;
	}
	return 0;
}
