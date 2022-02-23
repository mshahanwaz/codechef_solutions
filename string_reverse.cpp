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
		string s;
		cin >> s;
		int k = 0, n = (int)s.length();
		for (int i = 0; i < n / 2; ++i) {
			if (s[i] == s[n - i - 1]) ++k;
			else break;
		}
		int ans = 0;
		if (k != n / 2) {
			int p = 1;
			char prev = '0';
			for (int i = n - k - 1; i >= k; --i) {
				if (prev == '0') prev = s[i];
				else if (prev == s[i]) ++p;
				else break;
			}
			ans = n - k - p;
		}
		cout << ans << endl;
    }
	return 0;
}

