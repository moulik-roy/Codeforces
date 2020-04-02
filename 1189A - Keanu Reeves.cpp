#include <iostream>
using namespace std;

int main(){
	int n, i, ones;
	string s;
	cin>>n;
	cin>>s;
	for(i=0, ones=0; i<n; i++){
		if(s[i]=='1')
			ones++;
	}
	if(n-ones!=ones)
		cout<<1<<"\n";
	else{
		cout<<2<<"\n";
		s=s.substr(0, 1)+" "+s.substr(1);
	}
	cout<<s<<"\n";
	return 0;
}