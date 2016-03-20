#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b;
	char temp;
	long long t;
	vector<int> v;
	long long time=0;
	int total=0;
	cin>>n>>a>>b>>t;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back((temp=='w'?b:0));
	}
	if(t==0){
		cout<<"0";
		return 0;
	}
	if(t>=(n+accumulate(v.begin(),v.end(),0)+(n-1)*a)){
		cout<<n;
		return 0;
	}
	//go right
	t-=(v[0]+1);	//first photo
	int first=1;
	int last = n/2;
	int p=log2(n);
	int mid = n/2;
	
	for(int i=0;i<p;i++){
		time=accumulate(v.begin()+first, v.begin()+last);
		//+(last)*(a+1))
		mid/=2;
		time>t?last-=mid:last+=mid;
	}
	
	return 0;
}