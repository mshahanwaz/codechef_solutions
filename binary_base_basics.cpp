#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	if(n == 1) {
		cout << "YES\n";
		return;
	}
	int mid = (n + 1) / 2;
	int cnt = 0;
	for(int i = mid; i < n; i++) {
		if(s[i] != s[n - i - 1])
			++cnt;
	}
	if(cnt <= k && ((k - cnt) % 2 == 0 || ((k - cnt) % 2 == 1 && n % 2 == 1)))
		cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

