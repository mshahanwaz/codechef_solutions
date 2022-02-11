#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll a, b; cin >> a >> b;
	if(__gcd(a, b) == 1) cout << (a - 1ll) * (b - 1ll) << endl;
	else cout << -1 << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

