#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	int total=a/5;
	if(a%5!=0)total++;
	cout<<total;

	return 0;
}