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
		int cnt = 0, n = (int)s.length();
		for (int i = 0; i < n; i++) {
			if (s[i] == s[n - cnt - 1]) ++cnt;
		}
		cout << n - cnt << endl;
    }
	return 0;
}

