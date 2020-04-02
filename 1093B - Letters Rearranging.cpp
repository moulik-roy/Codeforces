#include <iostream>
using namespace std;

int main(){
	int t, i, count;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		int freq[26]={0};
		for(i=0, count=0; i<s.length(); i++){
			if(freq[s[i]-'a']==0)
				count++;
			freq[s[i]-'a']++;
		}
		if(count==1)
			cout<<"-1\n";
		else{
			s="";
			for(i=0; i<26; i++){
				while(freq[i]--)
					s+=(char)(i+'a');
			}
			cout<<s<<"\n";
		}
	}
	return 0;
}