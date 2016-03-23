#include <bits/stdc++.h>
using namespace std;

int main(){
	long long m,n,a;
	
	cin>>m>>n>>a;
	m=(m-1)/a+1;
	n=(n-1)/a+1;
	cout<<m*n;

	return 0;
}