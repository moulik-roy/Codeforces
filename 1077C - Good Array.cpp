#include <iostream>
#include <vector>
using namespace std;

int main(){
	long long int n, i, sum;
	vector <int> count(1000001, 0), nice_indices;
	cin>>n;
	long long int a[n];
	for(i=0, sum=0; i<n; i++){
		cin>>a[i];
		sum=sum+a[i];
		count[a[i]]++;
	}
	for(i=0; i<n; i++){
		count[a[i]]--;
		sum=sum-a[i];
		if(sum%2==0 && sum/2<1000001 && count[sum/2]>0)
			nice_indices.push_back(i+1);
		sum=sum+a[i];
		count[a[i]]++;
	}
	cout<<nice_indices.size()<<"\n";
	for(i=0; i<nice_indices.size(); i++)
		cout<<nice_indices[i]<<" ";
	cout<<"\n";
	return 0;
}