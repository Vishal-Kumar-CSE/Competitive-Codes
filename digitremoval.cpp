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
		int n,d;
		cin>>n>>d;
		int add = 0, last_dig , pos =0;
		int n1 = n;
		while(n1>0){
			last_dig = n1%10;
			n1 = n1/10;
			pos++;
			if(last_dig == d){
				n1 = n1 * pow(10 , pos);
				n1 += (last_dig + 1) * pow(10, pos-1);
				add = n1-n;
				pos = 0;
			}
		}
		cout<<add<<"\n";
	}
	return 0;
}