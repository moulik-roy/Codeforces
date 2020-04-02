#include <iostream>
using namespace std;

int main(){
	string n;
	int i, count, flag;
	cin>>n;
	flag=(n[0]=='1')?0:1;
	for(i=0, count=0; i<n.length() && flag==0; i++){
		if(n[i]=='1')
			count=0;
		else if(n[i]=='4'){
			count++;
			if(count>2)
				flag=1;
		}
		else
			flag=1;
	}
	if(flag==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}