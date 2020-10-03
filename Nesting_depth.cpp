// It's gonna End soon , sooner than it started .
#include "bits/stdc++.h"
#define pb push_back
using ll = long long;
using namespace std;
#define endl "\n";
int no = 1;
void D(){

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
		string s ;cin>>s;
	string res;
	int  n = s.length();

	int prev=  s[0] -'0';
	
	for(int i =0;i<prev;i++)res+='(';
	res+=s[0];

	for(int i =1; i<n;i++){
		int curr = s[i] -'0';
		ll diff = abs(prev-curr);
		if(prev> curr){
			while(diff--) res+=')';
		}
		else{
			while(diff--) res+='(';
		}
		res+=s[i];
		prev =curr;
	}
	while(prev--) res+=')';
	cout<<"Case #"<<no<<": "<<res<<endl;
	no++;
	}

}	
