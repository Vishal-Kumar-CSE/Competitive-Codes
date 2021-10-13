#include <bits/stdc++.h>
using namespace std;
#define ll 			    long long int
#define speed()         ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

	
	int n;
	cin>>n;
	int arr[n],evensum=0, oddsum=0;
	for(int i=0; i<n; i++){
		cin>>arr[i];  n  
	}

	for(int i=0; i<n; i++){
		if(i%2==0){
			if((arr[i]%2) == 0){
				evensum+=arr[i];
			}
		}
		else{
			if((arr[i]%2) !=0)
			oddsum+=arr[i];
		}
	}

	cout<<evensum<< " "<<oddsum;

	return 0;
}