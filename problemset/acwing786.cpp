#include<iostream>
using namespace std;
int nums[100005];
int quick_sort(int l,int r,int k){
	if(l>=r)return nums[k];
	int i=l-1,j=r+1,x=nums[(l+r)>>1];
	while(i<j){
		do i++; while(nums[i]<x);
		do j--; while(nums[j]>x);
		if(i<j)swap(nums[i],nums[j]);
	}
	if(k<=j) return quick_sort(l,j,k);
	else return quick_sort(j+1,r,k);
	
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;++i){
		scanf("%d",&nums[i]);
	}
	printf("%d",quick_sort(1,n,k));
	return 0;
	
}
