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

	int n;
	cin>>n;
	while(n--){
		int a,b,arr[1001];
		cin>>a>>b;
		for(int i=0; i<1001; i++){
			arr[i]=0;
		}

		for(int i=0; i<n; i++){
			arr[a]++;
			arr[b]++;
		}

		int max=0;
		for(int i=0; i<1001; i++){
			if(max<arr[i]){
				max=arr[i];
			}
		}
		for(int i=0; i<n; i++){
			if(arr[i] == max){
				cout<<i<<"\n";
			}
		}

	}
	return 0;
}