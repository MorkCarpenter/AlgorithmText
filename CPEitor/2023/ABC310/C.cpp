#include<iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
unordered_map<string, int>map;
int n;
long long ans = 0;
string tmp,tmp2;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		tmp2 = tmp;
		reverse(tmp.begin(), tmp.end());
		if(!map[tmp]&&!map[tmp2])++ans;
		++map[tmp];
		++map[tmp2];
	}
	cout << ans << "\n";
	return 0;
}