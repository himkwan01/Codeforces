#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(ll);

int main(){
	ll n, ttl, f, p;
	cin>>n;
	f=fact(n-1);
	p=pow(n-1,n-2);
	ttl=(n+1)*p*f;
	cout<<n<<" "<<p<<" "<<f<<endl;
	cout<<ttl;
	return 0;
}

ll fact(ll n){
	ll temp=1;
	for(int i=0;i<n;i++){
		temp*=(i+1);
	}
	return temp;
}