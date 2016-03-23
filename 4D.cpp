#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<pair<ll,ll>,ll>::iterator it;
int main(){
	ll size,w,h,ew,eh,count=0;
	m<pair<ll,ll>,ll> out;
	cin>>size>>w>>h;
	for(ll i=0;i<size;i++){
		cin>>ew>>eh;
		m[make_pair(ew,eh)]=i+1;
	}
	it i=m.begin();
	while(i->first.first<w || i->first.second<h)i++;count++;
	cout<<size-count;
	
	return 0;
}