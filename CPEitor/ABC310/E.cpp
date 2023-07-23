#include <iostream>
#include <algorithm>

using namespace std;
string ans = "";
char tmp[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int nums[100];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	int ans = 0;
    int sum = 0;
	for(auto i : nums){
        if(sum+i<0){
          ans = ans>sum?ans:sum;
          sum = 0;
          continue;
        }
		if(i<0){
			ans = ans>sum?ans:sum;
		}
        sum+=i;
	}
	ans = ans>sum?ans:sum;
	cout<<ans<<"\n";
}
