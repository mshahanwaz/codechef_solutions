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
		int n;
		cin >> n;
		vector<int> a(n);
		int cnt = 0;
		for (int &x: a) {
			cin >> x;
			cnt += x == 1;
		}
		int diff = abs(2 * cnt - n);
		if (diff < 3)
			puts("Yes");
		else puts("No");
	}
	return 0;
}
