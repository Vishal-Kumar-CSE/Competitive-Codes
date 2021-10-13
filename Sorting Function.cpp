#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int partitionf(int a[], int low, int high){
	int pivot=a[high];
	int i=low-1;
	for(int j=low; j<=high-1; j++){
		if(a[j]<pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[high]);
	return (i+1);

}

int quicksort(int a[], int low, int high){
	if(low<high){
		int pi=partitionf(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}



int insertionst(int a[], int n){

	int i,j,item;
	for(int i=1; i<=n; i++){
		item=a[i];
		j=i-1;
		while(j>-1 and item<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=item;

	}
}

int bubblest(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=n-i; j++){
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	//insertionst(a,n);
	// bubblest(a,n);
	quicksort(a,0,n);
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}