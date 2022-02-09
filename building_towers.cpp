#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll x, m; cin >> x >> m;
	ll res = 0;
	ll size = (ll)ceil(log2(x)) + 1ll;
	if(m < ceil(log2(x)) + 1ll) res = 0;
	else res = m - size + 1;
	cout << res << endl;
}
int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

