#include <bits/stdc++.h>
using namespace std;

string left(string s){
	int i;
	char temp = s[0];
	for(i=0;i<s.size()-1;i++){
		s[i]=s[i+1];
	}
	s[i]=temp;
	return s;
}
string right(string s){
	int i;
	char temp = s[s.size()-1];
	for(i=s.size()-1;i>=1;i--){
		s[i]=s[i-1];
	}
	s[0]=temp;
	return s;
}


int main(){
	string st;
	cin>>st;
	int n;
	cin>>n;
	string le =st;
	string ri = st;
	while(n--){
		string temp1 = left(le);
		string temp2 = right(ri);
		le = temp1;
		ri = temp2;
	}
	cout<<"Left:"<<le<<"\n";
	cout<<"Right:"<<ri;
	// cout<<"Left:"<<le<<end;
	// cout<<"Right:"<<ri<<end;


}
