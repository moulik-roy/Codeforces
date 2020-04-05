#include <iostream>
using namespace std;

int main(){
	int n, i, k;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
		cin>>a[i];
	for(i=1, k=0; i<n-1; i++){
		if(a[i-1]==1 && a[i]==0 && a[i+1]==1){
			k++;
			a[i+1]=0;
		}
	}
	cout<<k<<"\n";
	return 0;
}