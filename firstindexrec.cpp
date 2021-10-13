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

int First_index(int a[], int n, int Num){
	if(n == 0)
		return -1;

	if(a[0] == Num)
		return 0;

	int ans = First_index(a+1, n-1, Num);
	if(ans == -1)
		return ans;

	return (ans+1);
	
}

int main(){

	
	int n,Num;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>*(a+i);
	}
	cin>>Num;
	cout<<First_index(a,n,Num);

	return 0;
}