#include <iostream>
using namespace std;

int sumOfDigits(int n){
	int sum=0;
	while(n!=0){
		sum=sum+(n%10);
		n=n/10;
	}
	return sum;
}

int main(){
	int a, n;
	cin>>a;
	n=a;
	while(sumOfDigits(n)%4!=0)
		n++;
	cout<<n<<"\n";
	return 0;
}