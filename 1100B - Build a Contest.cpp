#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, m, i, j, a, count;
	string s="";
	cin>>n>>m;
	int hash[n]={0};
	for(i=0, count=0; i<m; i++){
		cin>>a;
		hash[a-1]++;
		if(hash[a-1]==1)
			count++;
		if(count==n){
			s+="1";
			for(j=0; j<n; j++){
				hash[j]--;
				if(hash[j]==0)
					count--;
			}
		}
		else
			s+="0";
	}
	cout<<s<<"\n";
	return 0;
}