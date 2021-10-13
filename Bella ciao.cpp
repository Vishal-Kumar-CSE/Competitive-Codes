#include <bits/stdc++.h>
using namespace std;
#define ll 			    long long int
#define speed()         ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

	int n,count=0;
	cin>>n;
	while(n%11!=1){
		n<<1;
		count++;

	}
	cout<<count<<" "<<n<<"\n";

	return 0;
}