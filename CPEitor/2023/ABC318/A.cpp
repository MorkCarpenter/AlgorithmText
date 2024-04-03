#include <iostream>
using namespace std;

int main() {
	int n, m, p;
	cin >> n >> m >> p;
	n -= m;
	cout << (n - (n % p)) / p + 1;
	return 0;
}