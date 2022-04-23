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
		int n;
		cin >> n;
		vector<int> a(n), b;
		for (int &x: a) {
			cin >> x;
		}
		b = a;
		sort(a.begin(), a.end());
		vector<int> idx;
		for (int i = 0; i < n; ++i)
			if (a[i] != b[i]) 
				idx.push_back(i);
		bool flag = false;
		if (idx.size() < 2 || idx.size() == 2 && idx[0] == idx[1] - 1) 
			flag = true;
		cout << (flag ? "YES" : "NO") << endl;
	}
	return 0;
}
