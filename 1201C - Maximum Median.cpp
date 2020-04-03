#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, k, i, count, low, high, mid;
	cin>>n>>k;
	int a[n];
	for(i=0; i<n; i++)
		cin>>a[i];
	sort(a, a+n);
	low=a[n/2];		high=2000000000;
	while(low<high){
		mid=low+(high-low+1)/2;
		for(i=n/2, count=0; i<n && a[i]<mid && count<=k; i++)
			count=count+mid-a[i];
		if(count<=k)
			low=mid;
		else
			high=mid-1;
	}
	cout<<low<<"\n";
	return 0;
}