#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	b%=n;
	if(b==0){cout<<a;return 0;}
	if(b<0)b+=n;
	a+=b;
	cout<<(a>n?a%n:a);
	return 0;
}