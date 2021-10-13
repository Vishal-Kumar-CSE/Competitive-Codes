#include <bits/stdc++.h>
using namespace std;
#define ll 			    long long int
#define speed()         ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

	speed();
	ll n,cs1 = 0,cs2 = 0,max_lead,max_lead_player;
	cin>>n;
	max_lead = 0;
	max_lead_player = 1;
	while(n--){
		ll s1, s2, curr_lead , curr_lead_player = 1;
		cin>>s1>>s2;
		cs1+=s1;
		cs2+=s2;
		if(cs1>cs2){
			curr_lead = cs1-cs2;
		}
		else
		{
			curr_lead = cs2-cs1;
			curr_lead_player = 2;
		}

		if(curr_lead>max_lead){
			max_lead = curr_lead;
			max_lead_player = curr_lead_player;
		}
	}

	cout<<max_lead_player<< " "<< max_lead;
	return 0;
}