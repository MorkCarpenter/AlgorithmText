#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
long long n, m;
int num[105],top;
bool flag;
int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;
	while (m) {
		num[++top] = m % n;
		m /= n;
	}
	flag = false;
	for (int i = 1; i <= top; ++i) {
		if (num[i] >= n - 1)++num[i + 1];
		else if (num[i] == 1 || num[i] == 0) {
			num[i] = 0;
		}
		else {
			flag = true;
		}
		if (flag)break;
	}
	if (flag) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
	return 0;
}