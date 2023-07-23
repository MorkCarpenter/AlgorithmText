#include<iostream>
#include <iomanip>
int nums[200005];
using namespace std;
void solve(){
	long  n,d,h;
	cin>>n>>d>>h;
	long double ans = (long double )d * h/2.0; 
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	for(int i=0;i<n;++i){
		if(nums[i]+h<nums[i+1]){
			ans += (long double )d * h/2.0;
		}else{
			long double top = (long double)((long double)(nums[i] + h - nums[i+1]) / h) * d;
			ans += ((long double)(top + d)*(long double)(nums[i+1]-nums[i]))/2.0;
		}
	}
	cout<<ans<<"\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cout.setioflags(ios::fixed);
	cout.setprecision(10);
	int n ;
	cin>>n;
	while(n--)solve();
	return 0;
}