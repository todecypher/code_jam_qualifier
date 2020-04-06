#include "bits/stdc++.h"
#define pb push_back
using ll = long long;
using namespace std;
#define endl "\n";
ll B;
void D(){
	string s(B, '0');

	if(B<=10)
	for(int i =1;i<=B;i++){
		cout<<i<<endl;
		cout.flush();
		char c;
		cin>>c;
		s[i-1] = c;
	}

	// if(B>10 && B<=20){
	// 	for(int i =1;i<=10;i++){
	// 	cout<<i<<endl;
	// 	char c;
	// 	cin>>c;
	// 	s[i-1] = c;
	// 	}
	// 	for(int i = 11;i<=31;i++){
	// 		cout<<i<<endl;
	// 		char c;
	// 		cin>>c;
	// 	}
	// 	int ct=11;
	// 	for(int i =32;i<=41;i++){
	// 		cout<<ct<<endl;
	// 		char c;
	// 		cin>>c;
	// 		s[ct-1] = c;
	// 		ct++;
	// 	}

	// }
	cout<<s<<endl;
	cout.flush();
	char c ; 
	cin>>c;
	return;
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
	cin>>t>>B;
	while(t--){
		D();
	}

}	