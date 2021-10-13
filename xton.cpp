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

int xton(int x, int n){
	if (n==0){
		return 1;
	}
	else
		return x * xton(x,n-1);
}
int main(){

	
	int x,n;
	cin>>x>>n;
	cout<<xton(x,n);

	return 0;
}