#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
typedef long long i64;
i64 in[100005], dpa[100005], dpb[100005],n,ans1,ans2;

using namespace std;
int main() {
	while (cin>>in[++n]);
	--n;
	ans1 = ans2 = 1;
	dpa[1] = dpb[1] = in[1];
	for (int i = 2; i <= n; ++i) {
		if (in[i] <= dpa[ans1]) {
			dpa[++ans1] = in[i];
		}
		else {
			dpa[upper_bound(dpa + 1, dpa + ans1 + 1, in[i], greater<i64>()) - dpa] = in[i];
		}
		if (in[i] > dpb[ans2]) {
			dpb[++ans2] = in[i];
		}
		else {
			dpb[lower_bound(dpb + 1, dpb + ans2 + 1, in[i]) - dpb] = in[i];
		}
	}
	printf("%lld\n%lld", ans1, ans2);
	return 0;
}