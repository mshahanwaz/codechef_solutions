#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	set<int> x, y;
	for(int i = 0; i < n; i++) {
		int tx, ty; cin >> tx >> ty;
		x.insert(tx);
		y.insert(ty);
	}
	cout << (int)x.size() + (int)y.size() << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

