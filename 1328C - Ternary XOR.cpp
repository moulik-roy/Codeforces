#include <iostream>
using namespace std;

int main(){
	int t, n, i, flag;
	string x, a, b;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>x;
		a="1";		b="1";
		for(i=1, flag=0; i<n; i++){
			if(x[i]=='0'){
				a+="0";
				b+="0";
			}
			else if(x[i]=='1'){
				if(flag==0){
					a+="1";
					b+="0";
					flag=1;
				}
				else{
					a+="0";
					b+="1";
				}
			}
			else{
				if(flag==0){
					a+="1";
					b+="1";
				}
				else{
					a+="0";
					b+="2";
				}
			}
		}
		cout<<a<<"\n"<<b<<"\n";
	}
	return 0;
}