#include <bits/stdc++.h>
using namespace std;
#define ll 			    long long int
#define mp              make_pair
#define em              emplace_back
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


int main(){

	
	speed();
	int t;
	cin>>t;
	while(t--){
		ll n,a,b,c, sum=0;
		cin>>n;
		 vector <ll> v;

		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			v.em(x);
		}

		a=distance(v.begin(), max_element(v.begin(), v.end()));
		b=distance(v.begin(), min_element(v.begin(), v.end()));


		v[a]=v[b];

// Wrong Answer
	 	for(int i=0; i<n; i++){
			sum+=v[i];
		}

		cout<<sum/v[b]<<"\n";

	}
	return 0;
}