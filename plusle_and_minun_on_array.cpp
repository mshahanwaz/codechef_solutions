#include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
    fastIO;
	ll TC = 1;
	cin >> TC;
	while (TC--) {
		ll n;
		cin >> n;
		vector<ll> a(n);
		ll sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i] < 0) a[i] = -a[i];
			if (i & 1) sum -= a[i];
			else sum += a[i];
		}
		ll mn = LLONG_MAX, mx = LLONG_MIN;
		for (int i = 0; i < n; ++i) {
			if (i & 1) mx = max(mx, a[i]);
			else mn = min(mn, a[i]);
		}
		cout << max(sum, sum + 2 * (mx - mn)) << endl;
	}
    return 0;
}
