#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;




//set<int>called;
//int top;
//int n, m, in;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	while (m--) {
//		cin >> n;
//		if (n == 1) {
//			called.insert(++top);
//		}
//		else if (n == 2) {
//			cin >> in;
//			called.erase(in);
//		}
//		else {
//			auto out = called.begin();
//			cout << *out << endl;
//		}
//	}
//	return 0;
//}
//int n, m;
//struct MyStruct
//{
//	int sign;
//	int num;
//
//}in[200005];
//bool cmp(MyStruct a, MyStruct b) {
//	return a.num < b.num;
//}
//int out[200005];
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	for (int i = 0; i < n; ++i) {
//		cin >> in[i].num;
//		in[i].sign = i;
//	}
//	for (int j = n; j < n + m; ++j) {
//		cin >> in[j].num;
//		in[j].sign = j;
//	}
//	sort(in, in + n + m, cmp);
//	for (int i = 0; i < n + m; ++i) {
//		out[in[i].sign] = i + 1;
//	}
//	for (int i = 0; i < n; ++i) {
//		cout << out[i] << " ";
//	}
//	cout << endl;
//	for (int i = n; i < n + m; ++i) {
//		cout << out[i] << " ";
//	}
//	return 0;
//}

//char out[105];
//int n, m;
//int in;
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			cin >> in;
//			out[j] = (in == 0 ? '.' : (char)('@' + in));
//		}
//		out[m] = '\0';
//		cout << out << endl;
//	}
//	return 0;
//}

//int a, b;
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> a;
//	while (a--) {
//		cin >> b;
//		if (b % 2 == 0)cout << b << " ";
//	}
//	return 0;
//}