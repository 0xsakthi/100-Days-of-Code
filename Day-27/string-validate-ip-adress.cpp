#include <bits/stdc++.h>
using namespace std;

int num(string s,int n){
	int ans = 0;
	int p = 1;
	for(int i=n-1;i>=0;i--){
		ans+=p*(s[i]-'0');
		p*=10;
	}
	return ans;
}

int main(){
	char s[20];
	scanf("%s",s);
	string temp = "";
	int si = 0;
	bool flag = true;
	int cnt = 0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]!='.'){
			temp+=s[i];
			si++;
		}else{
			cnt++;
			int numi = num(temp,si);
			if(numi>=0 and numi<=255){
				si = 0;
				temp = "";
				continue;
			}else{
				flag = false;
				break;
			}
		}
	}
	if(flag and cnt==3)
		cout<<flag;
	else
		cout<<flag;
}
