#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	int min=0;
	cin>>a>>b;
	if(a<2 && b<2){
		cout<<"0";
		return 0;
	}
	while(a>2 || b>2){
		//a lower charge a
		if(a<b){
			a++;
			b-=2;
		}
		else{
			b++;
			a-=2;
		}
		min++;
	}
	cout<<++min;

	return 0;
}