#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  
  int n,S;
  cin>>n>>S;
  vector<int> v;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  int s=0;
  int e=n;
  int mid=(s+e)/2;
  while(s<=e){
    if(S==v[mid]){
      cout<<"Found at "<< mid+1<<" Position";
      break;
    }
    else if (S<v[mid])
      e=mid-1;
    else if(S>v[mid])
      s=mid+1;
    mid=(s+e)/2;
  }

  if(s>e)
    cout<<"Not Found";
  return 0;
}