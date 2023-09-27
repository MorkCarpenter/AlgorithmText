#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int nums[10][3];
int m;

long long solve(string in) {
  long long ans = 0x3f3f3f3f;
  memset(nums, 0x3f3f, sizeof(nums));
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < m; ++j) {
      int sign = in[i * m + j] - '0';
      int tmp = j;
      for (int k = i - 1; k >= 0; --k) {
        if (nums[sign][k] == tmp) {
          tmp += m;
          break;
        }
      }
      for (int k = i - 1; k >= 0; --k) {
        if (nums[sign][k] == tmp) {
          tmp += m;
          break;
        }
      }
      nums[sign][i] = tmp > nums[sign][i] ? nums[sign][i] : tmp;
    }
  }
  for (int i = 0; i < 10; ++i) {
    if (nums[i][0] != 1061109567 && nums[i][1] != 1061109567 &&
        nums[i][2] != 1061109567) {
      sort(nums[i], nums[i] + 3);
      int tmp = nums[i][2];
      ans = ans > tmp ? tmp : ans;
    }
  }
  return ans;
}
int main() {
  ios::sync_with_stdio(false);
  string in1, in2, in3;
  cin >> m >> in1 >> in2 >> in3;
  long long true_ans = 0x3f3f3f3f;
  true_ans = min(solve(in2 + in3 + in1), true_ans);
  true_ans = min(solve(in2 + in1 + in3), true_ans);
  true_ans = min(solve(in1 + in2 + in3), true_ans);
  true_ans = min(solve(in1 + in3 + in2), true_ans);
  true_ans = min(solve(in3 + in2 + in1), true_ans);
  true_ans = min(solve(in3 + in1 + in2), true_ans);
  if (true_ans == 1061109567) {
    cout << -1;
  } else {
    cout << true_ans;
  }
}
