#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,low,high;
	long long temp;
	bool carry=false;  //false count+1
	long long count=0;
	cin>>a>>low>>high;
	if(low < 0 && high < 0){
		count=abs(low)/a - (abs(high)-1)/a;
	}
	else if(low > 0 && high > 0){
			count=high/a-(low-1)/a;
	}
	else if(high > 0 && low == 0){
		count=high/a+1;
	}
	else if(low < 0 && high == 0){
		count=abs(low)/a+1;
	}
	else{
		count=high/a-(low-1)/a;
		if((low-1)%a!=0)count++;
	}
	cout<<count;
	
	return 0;
}