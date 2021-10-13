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

int count_of_digit(int n){
	int count = 0;
	if (n == 0)
		return 0;
	else
		count++;
		return count + count_of_digit(n/10);
}

int main(){

	
	int n;
	cin>>n;
	cout<<count_of_digit(n);
	return 0;
}