#include <iostream>
using namespace std;

long long int find(long long int parent[], long long int i){
	while(parent[i]!=i){
		parent[i]=parent[parent[i]];
		i=parent[i];
	}
	return i;
}

int main(){
	long long int n, m, i, x, y, min_amount;
	cin>>n>>m;
	long long int c[n], parent[n];
	for(i=0; i<n; i++){
		cin>>c[i];
		parent[i]=i;
	}
	for(i=0; i<m; i++){
		cin>>x>>y;
		x=find(parent, x-1);
		y=find(parent, y-1);
		if(x!=y){
			parent[y]=x;
			c[x]=min(c[x], c[y]);
		}
	}
	for(i=0, min_amount=0; i<n; i++){
		if(parent[i]==i)
			min_amount+=c[i];
	}
	cout<<min_amount<<"\n";
	return 0;
}