#include <bits/stdc++.h>
using namespace std;
int n,q;
char a[36],b[36];
int recursion(char c, int s){
	int ttl=0;
	if(s==n-1)return 1;
	for(int i=0;i<q;i++)if(c==b[i]){ttl+=recursion(a[i],s+1);}
	return ttl;
}
int main(){
	cin>>n>>q;
	for(int i=0;i<q;i++)cin>>a[i]>>b[i]>>b[i];
	cout<<recursion('a',0);
}