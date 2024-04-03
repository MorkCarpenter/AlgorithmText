#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//int main() {
//
//}

//#include<iostream>
//using namespace std;
//int ok;
//int n, l, r, mid;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> n;
//	r = n;
//	l = 1;
//	while (l + 1 < r) {
//		mid = (l + r + 1) >> 1;
//		cout << '?' << mid << endl;
//		fflush(stdout);
//		cin >> ok;
//		if (ok == 1) {
//			r = mid;
//		}
//		else l = mid;
//	}
//	cout << '!' << l << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//char in;
//int ans;
//int sum;
//bool flag;
//int main() {
//	ios::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	while (n--) {
//		cin >> in;
//		if (in == 'o') {
//			++sum;
//		}
//		else {
//			flag = true;
//			if (sum > 0) {
//				ans = ans > sum ? ans : sum;
//				sum = 0;
//			}
//		}
//	}
//	if ((flag && sum > 0) || ans != 0) {
//		cout << (ans > sum ? ans : sum);
//	}
//	else {
//		cout << -1;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//bool flag1, flag2;
//int main() {
//	int n;
//	ios::sync_with_stdio(false);
//	string in;
//	cin >> n >> in;
//	for (auto i : in) {
//		if (i == '|' && !flag1) {
//			flag1 = true;
//			continue;
//		}
//		if (i == '|' && !flag2 && flag1) {
//			flag2 = true;
//			continue;
//		}
//		if ('*') {
//			if (flag1 && !flag2) {
//				cout << "in";
//			}
//			else {
//				cout << "out";
//			}
//			return 0;
//		}
//	}
//
//}