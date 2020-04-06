#include "bits/stdc++.h"
#define pb push_back
using ll = long long;
using namespace std;
#define endl "\n";
int x = 1;
struct node{
	int start ,end , index;
	bool operator <(node &a){
		if(this->end == a.end) return this->start<a.start;
		return this->end < a.end;
	}
};
void D(){
	string ans;
	
	ll n ; cin>>n;
	vector<node> v(n);
	for(int i =0;i<n;i++){
		ll x, y ;
		cin>>x>>y;
		v[i].start =x;
		v[i].end =y;
		v[i].index = i;
	}
	sort(v.begin() , v.end());

	map<int ,char> mp ;

	map<char, int > busy_till;

	char prev , curr;
	for(int i =0;i<n;i++){
		if(i==0){
			mp[v[i].index] = 'J';
			prev = 'J';
			busy_till['J']  = v[i].end;
		}
		else{
			if(v[i].start >= busy_till[prev]) {
				mp[v[i].index] = prev;
				busy_till[prev] = max(busy_till[prev] , v[i].end);
			}
			else{
				char curr = prev  =='J' ? 'C' : 'J';
				if(busy_till[curr] <= v[i].start){
					busy_till[curr] = max(busy_till[curr] , v[i].end);
					mp[v[i].index] = curr;
					prev= curr;
				}
				else{
					cout<<"Case #"<<x<<": "<<"IMPOSSIBLE"<<endl;
					x++;
					return;
				}
			}
		}
	}

	string res ;
	 for(int i =0 ; i<n;i++) {
	 	res+=mp[i];
	 }
	cout<<"Case #"<<x<<": "<<res<<endl;
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