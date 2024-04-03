#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
long long tmp1, tmp2;
long long mi, ma, n, a, b;
int main() {
	ios::sync_with_stdio(false);
	ma = 0x3f3f3f3f;
	mi = 1;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		tmp1 = (a - (a % b)) / b;
		++b;
		tmp2 = (a - (a % b)) / b;
		++tmp2;
		if (tmp1 <= ma)ma = tmp1;
		if (tmp2 >= mi)mi = tmp2;
	}
	cout << mi << " " << ma;
	return 0;
}