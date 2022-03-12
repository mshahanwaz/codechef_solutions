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
		string s, t;
		cin >> s >> t;
		string m = "";
		int n = (int)s.length();
		for (int i = 0; i < n; ++i) {
			if (s[i] == t[i])
				m += 'G';
			else m += 'B';
		}
		cout << m << endl;
	}
    return 0;
}
