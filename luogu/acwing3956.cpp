#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
long long in[100005], average, ans,nums;
int n;
int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> in[i];
		in[i] += in[i - 1];
	}
	if (in[n] % 3 != 0 || n < 3) {
		cout << 0 << endl;
		return 0;
	}
	average = in[n] / 3;
	for (int i = 1; i < n; ++i) {
		if (in[n] - in[i] == average)ans += nums;
		if (in[i] == average)++nums;
		
	}
	cout << ans << endl;
	return 0;
}