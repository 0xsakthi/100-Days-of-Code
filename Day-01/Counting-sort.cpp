
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 4;
	int arr[n] = {5,2,3,1};
	int maxi = *max_element(arr,arr+n);
	int arr2[maxi+1]={};
	for(int i=0;i<n;i++){
		arr2[arr[i]]++;
	}
	int sum=0;
	int arr3[maxi+1]={};
	for(int j=0;j<maxi+1;j++){
		sum+=arr2[j];
		arr3[j]=sum;
	}

	int final[n]={};
	for(int k=n-1;k>=0;k--){
		final[arr3[arr[k]]-1]=arr[k];
		arr3[arr[k]]--;
	}

	for(int i=0;i<n;i++){
		cout<<final[i];
	}

	return 0;
}
//output
1235
