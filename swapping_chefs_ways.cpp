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
		for (int i = 0; i < n / 2; ++i) {
			if (s[i] > s[n - i - 1]) {
				swap(s[i], s[n - i - 1]);
			}
		}
		bool flag = false;
		if (is_sorted(s.begin(), s.end())) flag = true; 
		cout << (flag ? "YES" : "NO") << endl;
	}
	return 0;
}
