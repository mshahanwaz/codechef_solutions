#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n, x, k;
		cin >> n >> x >> k;
		cout << min(n, k / x) << endl;
	}
	return 0;
}
