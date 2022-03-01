#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int TC = 1;
    // cin >> TC;
	while (TC--) {
		int d;
		cin >> d;
		if (d % 2) {
			cout << -1 << endl;
			continue;
		}
		vector<pair<int, int>> pt = {
			{0, d / 2},
			{d / 2, 0},
			{0, -d / 2},
			{-d / 2, 0}
		};
		for (auto x: pt) {
			cout << x.first << ' ' << x.second << endl;
		}
    }
	return 0;
}

