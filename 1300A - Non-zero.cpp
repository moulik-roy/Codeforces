#include <iostream>
using namespace std;

int main(){
	int t, n, i, a, sum, min_steps;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0, sum=0, min_steps=0; i<n; i++){
			cin>>a;
			if(a==0){
				min_steps++;
				sum++;
			}
			else
				sum=sum+a;
		}
		if(sum==0)
			min_steps++;
		cout<<min_steps<<"\n";
	}
	return 0;
}