#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int res = 1;
		char prev = s[0];
		for (int i = 1; i < n; ++i) {
			if (prev == s[i]) continue;
			++res;
			prev = s[i];
		}
		cout << res << endl;
    }
	return 0;
}

