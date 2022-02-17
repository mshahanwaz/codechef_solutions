#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int prec(char c) {
	if (c == '^') return 3;
	else if (c == '*' || c == '/') return 2;
	else if (c == '+' || c == '-') return 1;
	else return -1;
}

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
        int n;
		cin >> n;
		string s;
		cin >> s;
		string ans = "";
		stack<char> st;
		for (int i = 0; i < n; ++i) {
			char c = s[i];
			if (c == '(')
				st.push(c);
			else if (c >= 'A' && c <= 'Z')
				ans += c;
			else if (c == ')') {
				while (st.top() != '(') {
					ans += st.top();
					st.pop();
				}
				st.pop();
			} else {
				while (!st.empty() && prec(st.top()) >= prec(c)) {
					ans += st.top();
					st.pop();
				}
				st.push(c);
			}
		}
		while (!st.empty()) {
			ans += st.top();
			st.pop();
		}
		cout << ans << endl;
	}
	return 0;
}
