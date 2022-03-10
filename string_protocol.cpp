#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
    fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector<int> cnt;
		char prev = s[0];
		int occ = 1;
		for (int i = 1; i < n; ++i) {
			if (s[i] == prev) {
				++occ;
				continue;
			}
			cnt.push_back(occ);
			prev = s[i];
			occ = 1;
		}
		cnt.push_back(occ);
		int ans = 0;
		for (int x: cnt) {
			ans += (x + 1) / 2;
		}
		cout << ans << endl;
	}
    return 0;
}
