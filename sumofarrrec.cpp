#include <bits/stdc++.h>
using namespace std;
#define ll 			    long long int
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define big(x)          greater<x>()

#define PI              3.14159265
#define M               (int)1000000007
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define speed()         ios_base::sync_with_stdio(0);cin.tie(0);

int Sumofarr(int a[], int n){
	if(n==0)
		return 0;
	if(n==1)
		return *a;
	int Sumofar = a[0] + Sumofarr(a+1, n-1);
	return Sumofar;

}

int main(){

	
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>*(a+i);
	cout<<Sumofarr(a,n);



	return 0;
}