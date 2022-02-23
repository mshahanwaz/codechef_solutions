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
		ll b, c;
		cin >> b >> c;
		cout << c / __gcd(b, c) << endl;
    }
	return 0;
}

