#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(2 * n), cnt(2 * n + 5);
	for(int i = 0; i < 2 * n; i++) {
		cin >> a[i];
		++cnt[a[i]];
	}
	bool flag = true;
	for(int i = 0; flag && i < 2 * n; i++) {
		if(cnt[i] == 1) flag = false;
		else if(!cnt[i]) break;
	}
	cout << (flag ? "YES" : "NO") << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

