#include <iostream>
using namespace std;

int main(){
	int t, n;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		if(n==1)
			s="-1";
		else{
			s="2";
			while(--n)
				s+="3";
		}
		cout<<s<<"\n";
	}
	return 0;
}