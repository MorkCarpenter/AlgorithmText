#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;
int n, k, m;
int main() {
	ios::sync_with_stdio(false);
	cin >> m;
	while (m--) {
		cin >> n >> k;
		if (k % 3) {
			if (n % 3)cout << "Alice" << endl;
			else cout << "Bob" << endl;
		}
		else {
			n %= k + 1;
			if (n == k || n % 3)cout << "Alice" << endl;
			else cout << "Bob" << endl;
		}
	}
	return 0;
}