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

int main(){

	
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d,sum;
		cin>>a>>b>>c>>d;
		sum = (a+b+c);
		if(sum<=d)
			cout<<"1"<<"\n";
		else if (sum<=2*d)
			cout<<"2"<<"\n";
		else
			cout<<"3"<<"\n";
	}

	return 0;
}