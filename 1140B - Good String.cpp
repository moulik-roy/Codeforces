#include <iostream>
using namespace std;

int main(){
	int t, n, i, first_position_greater, last_position_lesser, min_count;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		for(i=0, first_position_greater=0; i<n && s[i]=='<'; i++)
			first_position_greater++;
		for(i=n-1, last_position_lesser=0; i>=0 && s[i]=='>'; i--)
			last_position_lesser++;
		min_count=min(first_position_greater, last_position_lesser);
		cout<<min_count<<"\n";
	}
	return 0;
}