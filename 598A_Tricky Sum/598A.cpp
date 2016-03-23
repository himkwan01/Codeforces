#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	int num;
	long long base = 1;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>a;
		int n=0;
		int p=log2(a);
		a=(1+a)*a/2;
		base=1;
		for(int i=0;i<=p;i++){
			base*=2;
			a-=base;
		}
		cout<<a<<endl;
		
	}
	return 0;
}