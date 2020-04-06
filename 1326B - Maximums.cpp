#include <iostream>
using namespace std;

int main(){
	int n, a, x, b, i;
	cin>>n;
	for(i=0, x=0; i<n; i++){
		cin>>b;
		a=b+x;
		x=max(x, a);
		cout<<a<<" ";
	}
	cout<<"\n";
	return 0;
}