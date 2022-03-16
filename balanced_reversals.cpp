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
		int zero = 0, one = 0;
		for (char c: s) {
			if (c == '0') ++zero;
			else ++one;
		}
		for (int i = 0; i < zero; ++i)
			cout << 0;
		for (int i = 0; i < one; ++i) 
			cout << 1;
		cout << endl;
	}
	return 0;
}
