#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t, n, i, even_count, odd_count;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		vector <int> p;
		for(i=0, odd_count=0, even_count=0; i<n; i++){
			cin>>a[i];
			if(a[i]%2==0)
				even_count++;
			else
				odd_count++;
		}
		if(even_count>0){
			for(i=0; i<n; i++){
				if(a[i]%2==0){
					p.push_back(i+1);
					break;
				}
			}
		}
		else if(odd_count>1){
			for(i=0, odd_count=0; i<n && odd_count<2; i++){
				if(a[i]%2!=0){
					odd_count++;
					p.push_back(i+1);
				}
			}
		}
		if(p.size()==0)
			cout<<"-1\n";
		else{
			cout<<p.size()<<"\n";
			for(i=0; i<p.size(); i++)
				cout<<p[i]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}