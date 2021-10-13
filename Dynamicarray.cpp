#include <bits/stdc++.h>
using namespace std;
#define ll 			    long long int
#define speed()         ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

	int n;
	cin>>n;
	int** arr = new int*[n]; 
	for(int i=0; i<n; i++){
		arr[i] = new int[n];
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}

	for(int col=0; col<n; col++){
		if((col%2) == 0){
			for(int row=0; row<n; row++){
				cout<< arr[row][col] << " ";
			}
		}
		else{
			for(int row=n-1; row>=0; row--){
				cout<< arr[row][col] << " ";
			}
		}
	}

	for(int i=0; i<n; i++){
		delete arr[i];
	}

	delete[] arr;

	return 0;
}