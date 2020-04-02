#include <iostream>
using namespace std;

int main(){
	int t, a, b, min_moves;
	cin>>t;
	while(t--){
		cin>>a>>b;
		min_moves=b-((a%b==0)?b:(a%b));
		cout<<min_moves<<"\n";
	}
	return 0;
}