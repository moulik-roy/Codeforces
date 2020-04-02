#include <iostream>
using namespace std;

int main(){
	long long int k, a, b, count;
	cin>>k>>a>>b;
	if(a<0 && b<0)
		count=((b+1)/k)-(a/k);
	else if(a<=0 && b>=0)
		count=1+(-a/k)+(b/k);
	else
		count=(b/k)-((a-1)/k);
	cout<<count<<"\n";
	return 0;
}