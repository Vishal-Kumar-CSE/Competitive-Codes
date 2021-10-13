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

bool check_Number_Recursive(int a[], int n, int Search_num){
	if(n == 0 )
		return false;
	if(a[0] == Search_num)
		return true;
	check_Number_Recursive(a+1, n-1, Search_num);
}

int main(){

	
	int n, Search_num;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>*(a+i);
	cin>>Search_num;

	if(check_Number_Recursive(a,n,Search_num))
		cout<<"True"<<"\n";
	else
		cout<<"False"<<"\n";

	return 0;
}