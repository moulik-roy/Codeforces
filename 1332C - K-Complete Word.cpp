#include <iostream>
using namespace std;

int main(){
	int t, n, k, i, j, count, sum, max_freq, freq[26];
	string s;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cin>>s;
		for(i=0, count=0; i<(k+1)/2; i++){
			for(j=0; j<26; j++)
				freq[j]=0;
			for(j=i; j<n; j+=k){
				freq[s[j]-'a']++;
				if(k-2*i-1>0)
					freq[s[j+k-2*i-1]-'a']++;
			}
			for(j=0, sum=0, max_freq=0; j<26; j++){
				sum=sum+freq[j];
				max_freq=max(max_freq, freq[j]);
			}
			count=count+sum-max_freq;
		}
		cout<<count<<"\n";
	}
	return 0;
}