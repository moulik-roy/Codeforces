#include <iostream>
using namespace std;

int main(){
	int t, i, count;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		for(i=0, count=0; i<s.length(); i++){
			if(s[i]=='0')
				count++;
		}
		if(count>=s.length()-1)
			count=0;
		else{
			for(i=0; i<s.length() && s[i]=='0'; i++)
				count--;
			for(i=s.length()-1; i>=0 && s[i]=='0'; i--)
				count--;
		}
		cout<<count<<"\n";
	}
	return 0;
}