#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	string temp = s;
	reverse(temp.begin(),temp.end());
	int i=0;
	int j=0;
	int ans = 0;
	while(i<s.length()){
	    if(s[i]==temp[j]){
	        i++;
	        j++;
	    }else{
	        ans++;
	 	   	i++;
	    }
	}
	cout<<ans<<"\n";
}
	return 0;
}
