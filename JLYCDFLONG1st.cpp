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
#define rep(i,a,b)      for(i=a; i<b; ++i)
#define rrep(i,a,b)     for(i=a; i>=b; --i)
#define for(a)			for(i=0; i<a; i++)

int main(){

	
	speed();
	int t;
	cin>>t;
	while(t--){
		ll d,x,y,z,n,st1,st2;
		cin>>d>>x>>y>>z;
		st1=x*7;
		st2=y*d+(7-d)*z;
		cout<<max(st1,st2)<<"\n";
	}

	return 0;
}