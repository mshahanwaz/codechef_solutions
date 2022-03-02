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
		int n;
		cin >> n;
		vector<int> a(n);
		for (int &x: a) {
			cin >> x;
		}
		string s;
		cin >> s;
		if (is_sorted(a.begin(), a.end())) {
			cout << 0 << endl;
			continue;
		}
		int cntN = 0;
		for (char c: s)
			if (c == 'N')
				++cntN;
		if (!cntN || cntN == n) {
			cout << -1 << endl;
			continue;
		}
		vector<int> b = a;
		sort(a.begin(), a.end());
		int start = INT_MAX;
		int end = INT_MIN;
		for (int i = 0; i < n; ++i) {
			if (a[i] != b[i]) {
				start = min(i, start);
				end = max(end, i);
			}
		}
		bool f1, f2;
		f1 = f2 = false;
		for (int i = 0; !f1 && i < start; ++i) {
			if (s[i] != s[end]) f1 = true;
		}
		for (int i = end; !f2 && i < n; ++i) {
			if (s[i] != s[start]) f2 = true;
		}
		if (s[start] != s[end] || f1 || f2)
			cout << 1;
		else cout << 2;
		cout << endl;
	}
	return 0;
}
