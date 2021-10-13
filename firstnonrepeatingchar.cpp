#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

	string s;
	cin>>s;

	map<char, int> m;

	for(int i=0; i<s.size(); i++){
		m[s[i]]++;
	}

	map<char,int>:: iterator it;

	for(it = m.begin(); it!= m.end(); it++){
		if(it->second==1){
			cout<<it->first<<"\n";
			return 0;
		}
	}
	cout<<s[0]


	return 0;
}