#include<iostream>
using namespace std;

int now, _time;
int n, ending, dig[105][3];

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> ending;
	for(int i = 0; i<n; ++i){
		cin >> dig[i][0] >> dig[i][1] >> dig[i][2];
	}
	for (int i = 0; i < n; ++i) {
		_time += dig[i][0] - now;
		now = dig[i][0];
		if (_time%(dig[i][1]+dig[i][2]) > dig[i][1]) {
			continue;
		}
		else {
			_time += dig[i][1] - (_time % (dig[i][1] + dig[i][2]) );

		}
	}
	_time += ending - now;
	cout << _time << endl;
	return 0;
}





