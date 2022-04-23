#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)
#define sz(x) (int)x.size()

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int a, b;
		cin >> a >> b;
		string ans = "FIRST";
		if (a * 10 == b * 5)
			ans = "ANY";
		else if (a * 10 < b * 5) 
			ans = "SECOND";
		cout << ans << endl;
	}
	return 0;
}
