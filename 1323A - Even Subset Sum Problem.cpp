#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t, n, i;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		vector <int> p;
		for(i=0; i<n; i++){
			cin>>a[i];
			if(a[i]%2==0)
				p.push_back(i+1);
		}
		if(n==1 && a[0]%2!=0)
			cout<<"-1\n";
		else{
			if(p.size()==0){
				for(i=0; i<n && p.size()<2; i++)
					p.push_back(i+1);
			}
			cout<<p.size()<<"\n";
			for(i=0; i<p.size(); i++)
				cout<<p[i]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}