#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	int t, n, m, a, i, j;
	cin>>t;
	while(t--){
		cin>>n;
		int c[n];
		unordered_map <int, int> color;
		for(i=0, m=0; i<n; i++){
			cin>>a;
			for(j=2; j<=a; j++){
				if(a%j==0)
					break;
			}
			if(color.find(j)==color.end()){
				m++;
				color[j]=m;
			}
			c[i]=color[j];
		}
		cout<<m<<"\n";
		for(i=0; i<n; i++)
			cout<<c[i]<<" ";
		cout<<"\n";
	}
	return 0;
}