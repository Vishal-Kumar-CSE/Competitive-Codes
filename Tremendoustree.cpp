#include <bits/stdc++.h>
using namespace std;
#define ll 			    long long int
#define speed()         ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	speed();
	int t;
	cin>>t;
	while(t--){
		ll n,count;
		cin>>n;
		while(n%11!=1){
			n=n*2;
			count++;
		}
	cout<<count<<" "<<n<<"\n";
	}
	return 0;
}