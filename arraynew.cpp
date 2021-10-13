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

	ll n, count = 0;
	cin>>n;
	ll arr[n];
	vector <int> v;

	for(int i=0; i<n; i++)
		cin>>arr[i];
	for(int i=0; i<n; i++){
		if(arr[i]%3==0){
			count++;
			v.emplace_back(i+1);
		}
	}
	if (count == 0){
		cout<<"Nothing here!"<<"\n";
		return 0;
	}
	cout<<count<<"\n";

	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}