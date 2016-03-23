#include <bits/stdc++.h>
using namespace std;

int main(){
	int count =0;
	int dum;
	cin>>dum>>dum;
	int a,b;
	while(!cin.fail()){
		cin>>a>>b;
		if(!cin.fail()){
			if(a==1 || b ==1)count++;
		}
	}
	cout<<count;
	
	
	return 0;
}