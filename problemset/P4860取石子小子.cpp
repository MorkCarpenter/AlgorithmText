#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n;
	while (n--) {
		cin >> m;
		if (m % 4)cout << "October wins!" << endl;
		else cout << "Roy wins!" << endl;
	}
	return 0;
}
