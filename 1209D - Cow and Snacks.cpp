#include <iostream>
using namespace std;

int find(int parent[], int i){
	while(parent[i]!=i){
		parent[i]=parent[parent[i]];
		i=parent[i];
	}
	return i;
}

int main(){
	int n, k, i, x, y, count;
	cin>>n>>k;
	int parent[n];
	for(i=0; i<n; i++)
		parent[i]=i;
	for(i=0, count=0; i<k; i++){
		cin>>x>>y;
		x=find(parent, x-1);
		y=find(parent, y-1);
		if(x!=y)
			parent[y]=x;
		else
			count++;
	}
	cout<<count<<"\n";
	return 0;
}