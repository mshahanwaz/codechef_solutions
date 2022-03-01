#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int TC = 1;
    cin >> TC;
	while (TC--) {
		ll n;
		cin >> n;
		vector<ll> a(n);
		for (ll &x: a) {
			cin >> x;
		}
		for (ll i = 1; i < n; ++i) {
			a[i] += a[i - 1];
		}
		ll ans, diff = INT_MAX;
		for (ll i = 0; i < n; ++i) {
			if (abs(a[n - 1] - 2 * a[i]) < diff) {
				ans = max(a[i], a[n - 1] - a[i]);
				diff = abs(a[n - 1] - 2 * a[i]);
			}
		}
		cout << ans << endl;
    }
	return 0;
}

