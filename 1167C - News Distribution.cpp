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
	int n, m, k, i, user, x, y;
	cin>>n>>m;
	int parent[n], count[n];
	for(i=0; i<n; i++){
		parent[i]=i;
		count[i]=1;
	}
	while(m--){
		cin>>k;
		for(i=0; i<k; i++){
			cin>>user;
			if(i==0)
				x=find(parent, user-1);
			else{
				y=find(parent, user-1);
				if(x!=y){
					parent[y]=x;
					count[x]+=count[y];
				}
			}
		}
	}
	for(i=0; i<n; i++){
		if(parent[i]!=i)
			count[i]=count[find(parent, i)];
		cout<<count[i]<<" ";
	}
	return 0;
}