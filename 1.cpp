//Binary Search is also knowm as half-interval Search or logrithmic search or binary chop.
//Binary search runs in logarithmic time in the worst case, making O(log n) comparisons, where n is the number of elements in the array.
//For Binary Search, input data must be sorted either ascending or descending order.


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  
  int n,S,x;
  cin>>n>>S;
  int v[n];
  for(int i=0; i<n; i++){
   cin>>v[i];
  }
int low=0;
int high=n-1;
int mid = (low+high)/2;
  while(low<=high){
    if(v[mid]==S){
    cout<<"Found at "<<mid+1<<" Position";
    break;
  }
    else if(S>v[mid])
      low=mid+1;
    else if (S<v[mid])
     high=mid-1;
   else
    cout<<"Not Found";
    mid=(low+high)/2;
  }
  return 0;
}