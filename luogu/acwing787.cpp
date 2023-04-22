#include<iostream>
using namespace std;

int nums[100005],tmp[100005];

void merge_sort(int l,int r){
	if(l>=r)return ;
	int mid = (l+r)>>1;
	merge_sort(l,mid);
	merge_sort(mid+1,r);
	int k=0,i=l,j=mid+1;
	while(i<=mid&&j<=r){
		if(nums[i]<=nums[j])tmp[k++]=nums[i++];
		else tmp[k++]=nums[j++];
		
	}
	while(i<=mid)tmp[k++]=nums[i++];
	while(j<=r)tmp[k++]=nums[j++];
	for(int k=0,i=l;i<=r;++k,++i){
		nums[i]=tmp[k];
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&nums[i]);
	}
	merge_sort(1,n);
	for(int i=1;i<=n;++i){
		printf("%d ",nums[i]);
	}
	return 0;
}
