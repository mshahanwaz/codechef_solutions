#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	float ans = 1;
	for(int i = 0; i < n; i++) ans *= 0.143 * n;
	cout << floor(ans + 0.5) << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

