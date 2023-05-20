#define _CRT_SECURE_NO_WARNINGS 1

class GirlFriend {

};

int main() {
	GirlFriend* girlfriend = new GirlFriend();
}



//#include<iostream>
//using namespace std;
//string in;
//size_t n;
//size_t ans;
//int main() {
//	cin >> in >> n;
//	for (int i = 0; i < in.size(); ++i) {
//		ans <<= 1;
//		if (in[i] != '?') {
//			ans |= in[i] = '0';
//		}
//	}
//	size_t tmp = 1 << in.size() - 1;
//	for (int i = 0; i < in.size(); ++i) {
//		if (in[i] == '?') {
//			if (ans + tmp < n) {
//				ans += tmp;
//			}
//		}
//		tmp >>= 1;
//	}
//	if (ans > n) {
//		cout << -1;
//		return 0;
//	}
//	else {
//		cout << ans;
//		return 0;
//	}
//}