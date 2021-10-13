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

int printrecursion(int n){
	if (n==1)
		cout<<"";
		else
		printrecursion(n-1);
	cout<<n<<" ";
}
int main(){

	
	int n;
	cin>>n;
	printrecursion(n);

	return 0;
}