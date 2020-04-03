#include <iostream>
using namespace std;

int main(){
	int q, i, j, flag;
	string s, t, p;
	cin>>q;
	while(q--){
		cin>>s>>t>>p;
		int freq[26]={0};
		for(i=0, j=0; i<t.length() && j<s.length(); i++){
			if(t[i]==s[j])
				j++;
		}
		flag=(j==s.length())?0:1;
		if(flag==0){
			for(i=0; i<s.length(); i++)
				freq[s[i]-'a']++;
			for(i=0; i<p.length(); i++)
				freq[p[i]-'a']++;
			for(i=0; i<t.length() && flag==0; i++){
				freq[t[i]-'a']--;
				if(freq[t[i]-'a']<0)
					flag=1;
			}
		}
		if(flag==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}