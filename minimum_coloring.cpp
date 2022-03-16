#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

struct Point {
	int x, y;
} Point;

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n, m;
		cin >> n >> m;
		int ans[n + 1][m + 1];
		struct Point p1, p2;
		cin >> p1.x >> p1.y;
		cin >> p2.x >> p2.y;
		ans[p1.x][p1.y] = 1;
		ans[p2.x][p2.y] = 2;
		bool is_check = (((p1.x + p1.y) & 1) != ((p2.x + p2.y) & 1));
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				if ((i == p1.x && j == p1.y) || (i == p2.x && j == p2.y))
					continue;
				if (((i + j) & 1) == ((p1.x + p1.y) & 1)) 
					ans[i][j] = 1;
				else ans[i][j] = (is_check ? 2 : 3);
			}
		}
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= m; ++j)
				cout << ans[i][j] << " \n"[j == m];
	}
	return 0;
}
