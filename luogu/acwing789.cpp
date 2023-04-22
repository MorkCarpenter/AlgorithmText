#include<iostream>
#include<algorithm>
int nums[100005];
int n;
int findl(int k){
	int l=1,r=n;
	while(l<r){
		int mid = (l+r)>>1;
		if(nums[mid]>=k)r=mid;
		else l=mid + 1;
	}
	if(nums[l]==k)return l-1;
	return -1;
}
int findr(int k){
	int l=1,r=n;
	while(l<r){
		int mid = (l+r + 1)>>1;
		if(nums[mid]<=k)l=mid;
		else r=mid-1;
	}
	if(nums[r]==k)return r-1;
	return -1;
}
int main(){
	int q,k;
	scanf("%d %d",&n,&q);
	for(int i=1;i<=n;++i){
		scanf("%d",&nums[i]);
	}
	while(q--){
		scanf("%d",&k);
		printf("%d %d\n",findl(k),findr(k));
	}
	return 0;
}
