#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n, i, min_days_rest;
	cin>>n;
	int a[n], dp[n][3];
	for(i=0; i<n; i++){
		cin>>a[i];
		dp[i][0]=dp[i][1]=dp[i][2]=INT_MAX;
	}
	dp[0][0]=1;		dp[0][1]=(a[0]==1||a[0]==3)?0:1;	dp[0][2]=(a[0]==2||a[0]==3)?0:1;
	for(i=1; i<n; i++){
		dp[i][0]=1+min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
		if(a[i]==1 || a[i]==3)
			dp[i][1]=min(dp[i-1][0], dp[i-1][2]);
		if(a[i]==2 || a[i]==3)
			dp[i][2]=min(dp[i-1][0], dp[i-1][1]);
	}
	min_days_rest=min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));
	cout<<min_days_rest<<"\n";
	return 0;
}