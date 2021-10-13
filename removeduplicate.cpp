#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//2 3 1 6 118 19 23 64 11 243

vector <int> repeatDuplicate(vector <int>& input){

	// First Method
	// set<int> s;

	// for(int i=0; i<input.size(); i++)
	// 	s.insert(input[i]);

	// set<int>::iterator it;
	// for(it=s.begin(); it!=s.end(); it++)
	// 	cout<<*it<<" ";

	// Second Method
	// set<int> s;
	// vector<int> result;
	// for(int i=0; i<input.size(); i++){
	// 	if(s.find(input[i])==s.end()){
	// 		s.insert(input[i]);
	// 		result.push_back(input[i]);
	// 	}
	// }
	// return result;

	// Third Method
	vector<int> result;
	sort(input.begin(), input.end());
	result.push_back(input[0]);

	for(int i=1; i<input.size(); i++){
		if(input[i] != input[i-1])
			result.push_back(input[i]);
	}

	return result;


}

int main(){
	
	int n,x;
	cin>>n;
	vector<int> v;
 	for(int i=0; i<n; i++){
 			cin>>x;
 			v.push_back(x);
 		}

 	repeatDuplicate(v);

	vector<int>::iterator it;

 	for(it=v.begin(); it!=v.end(); it++)
 			cout<<*it<<" ";





	return 0;
}