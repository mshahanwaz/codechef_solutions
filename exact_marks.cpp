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
		int n, x;
		cin >> n >> x;
		int a = (x + 2) / 3;
		int b = 3 * a - x;
		int c = n - a - b;
		if (a + b <= n)
			cout << "YES\n" << a << ' ' << b << ' ' << c << endl;
		else cout << "NO\n";
	}
	return 0;
}
