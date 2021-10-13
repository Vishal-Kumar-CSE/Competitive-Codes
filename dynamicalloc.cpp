#include <bits/stdc++.h>
using namespace std;

int main(){
	int* a2	= new int[10];
	int n;
	cin>>n;
	int* a1	= new int[n];
	for(int i=0; i<n; i++){
		cin>>a1[i];
	}

	for(int i=0; i<n; i++){
		cout<<a1[i]<<endl;
	}
	

	return 0;
}