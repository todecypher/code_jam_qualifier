// It's gonna End soon , sooner than it started .
#include "bits/stdc++.h"
#define pb push_back
using ll = long long;
using namespace std;
#define endl "\n";
int x = 1;
void D(){
	ll n ; cin>>n;
	ll k=0 , r=0, c=0; 
	ll a[n][n];

	for(ll i =0;i<n;i++) {
		unordered_set<ll>s;
		for(ll  j =0 ;j<n;j++){
			cin>>a[i][j];
			s.insert(a[i][j]);
			if(i==j) k+=a[i][j];	
		}
		r+=((ll)s.size() != n);	
	}

	for(ll i =0;i<n;i++) {
		unordered_set<ll>s;
		for(ll  j =0 ;j<n;j++){
			s.insert(a[j][i]);
		}
		c+=((ll)s.size() != n);	
	}



	cout<<"Case #"<<x<<": "<<k<<" "<<r<<" "<<c<<endl;
	x++;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cout.precision(0);
	cout<<fixed;

	ll n , m,k ,pt(0),ct(0) ,x,y; 
	ll t =1; 
	cin>>t;
	while(t--){
		D();
	}

}	