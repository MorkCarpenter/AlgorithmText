#include<iostream>

using namespace std;
int nums[100005];
void qucik_sort(int l,int r){
	if(l >= r)return;
	int i = l-1,j = r+1,x = nums[(l+r)>>1];
	while(i < j){
		do i++; while(nums[i] < x);
		do j--; while(nums[j] > x);
		if(i < j)swap(nums[i],nums[j]);
	}
	qucik_sort(l,j);
	qucik_sort(j+1,r);//必须要用j
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&nums[i]);
	}
	qucik_sort(1,n);
	for(int i=1;i<=n;++i){
		printf("%d ",nums[i]);
	}
	return 0;
}
