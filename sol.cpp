#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int act = 0, sum = 0;
		string orig;
		cin >> act >> orig;
		for (int i = 0; i < act; i++) {
			string k;
			cin >> k;
			if (k == "CONTEST_WON") {
				int r;
				cin >> r;
				int b = max(0, 20 - r);
				sum += (300 + b);
			} else if (k == "TOP_CONTRIBUTOR") {
				sum += 300;
			} else if (k == "BUG_FOUND") {
				int s;
				cin >> s;
				sum += s;
			} else if (k == "CONTEST_HOSTED") {
				sum += 50;
			}
		}
		cout << sum / (orig == "INDIAN" ? 200 : 400) << '\n';
	}
	return 0;
}
