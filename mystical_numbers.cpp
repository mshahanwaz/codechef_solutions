#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using ii = pair<int, int>;
using mii = map<int, int>;

#define endl '\n'
#define TEZ cin.tie(0)->sync_with_stdio(0)
#define eb emplace_back
#define pb push_back
#define ins insert
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mt make_tuple
#define rep(i, x, y) for (__typeof(y) i = (x) - ((x) > (y)); i != (y) - ((x) > (y)); i += 1 - 2 * ((x) > (y)))
#define dbg(x) cout << #x << " = " << x << endl

template <typename T, typename U> static inline void amax(T &x, U y) { if (x < y) x = y; }
template <typename T, typename U> static inline void amin(T &x, U y) { if (y < x) x = y; }

int msb(int x) {
	if (!x)
		return x;
	int cnt = 1;
	while (x >> cnt)
		++cnt;
	return cnt;
}

int main() {
	TEZ;

	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		vi a(n);
		for (int &x: a)
			cin >> x;

		vector<vi> pref(n + 1, vi(32));
		rep(i, 0, n) {
			int b = msb(a[i]);
			rep(j, 0, 32)
				pref[i + 1][j] = pref[i][j] + (b == j);
		}

		int q;
		cin >> q;
		while (q--) {
			int l, r, x;
			cin >> l >> r >> x;
			int b = msb(x);
			int ans = r - l + 1 - pref[r][b] + pref[l - 1][b];
			cout << ans << endl;
		}
	}
	return 0;
}
