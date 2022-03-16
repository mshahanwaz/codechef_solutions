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
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int &x: a) {
			cin >> x;
		}
		sort(a.begin(), a.end());
		int pos = 0;
		for (; pos < n; ++pos) {
			if (k >= a[pos])
				k -= a[pos];
			else break;
		}
		if (pos < n && k >= (a[pos] + 1) / 2) {
			++pos;
		}
		cout << pos << endl;
	}
	return 0;
}
