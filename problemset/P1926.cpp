//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int n, m, k, r;
//int likes[11],txts[11],sorce[11];
//int dps[1001] = { 0 },lastt = 0;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> m >> k >> r;
//	for (size_t i = 0; i < n; ++i)
//	{
//		cin >> likes[i];
//	}
//	sort(likes, likes + n);
//	for (size_t i = 0; i < m; i++)
//	{
//		cin >> txts[i];
//	}for (size_t i = 0; i < m; i++)
//	{
//		cin >> sorce[i];
//	}
//	for (size_t i = 0; i < m; ++i)
//	{
//		for (size_t j = r; j >= txts[i]; --j) {
//			dps[j] = max(dps[j], dps[j - txts[i]] + sorce[i]);
//		}
//	}
//	for (size_t i = 0; i <= r; ++i) {
//		if (dps[i] >= k){
//			lastt = r - i;
//			break;
//		}
//	}
//	for (size_t i = 0; i < n; ++i) {
//		if (lastt < likes[i]) {
//			cout << i << endl;
//			break;
//		}
//		else {
//			lastt -= likes[i];
//		}
//	}
//	return 0;
//}