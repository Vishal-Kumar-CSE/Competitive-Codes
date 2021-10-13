#include <bits/stdc++.h>
using namespace std;
#define ll              long long int
#define mp              make_pair
#define pb              emplace_back
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



ll Maxpairproduct(vector <ll> v){

    int max_index1= -1;
    int max_index2 = -1;
    ll max_product;

    for(int i=0; i<v.size(); i++){
        if((max_index1==-1) || (v[i]>v[max_index1]))
            max_index1=i;
    }

    for(int j=0; j<v.size(); j++){
        if((j!=max_index1) && (max_index2==-1 || (v[j]>v[max_index2])))
            max_index2=j;
    }
    max_product = v[max_index1] * v[max_index2];
    return max_product;
}

int main(){

    int n;
    cin>>n;
    vector <ll> v;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        v.pb(x);
    }
    Maxpairproduct(v);
    cout<<Maxpairproduct(v)<<"\n";

    return 0;
}



