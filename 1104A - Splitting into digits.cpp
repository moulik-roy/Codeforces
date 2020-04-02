#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<10)
		cout<<1<<" "<<n<<"\n";
	else{
		cout<<n<<"\n";
		while(n--)
			cout<<1<<" ";
	}
	return 0;
}