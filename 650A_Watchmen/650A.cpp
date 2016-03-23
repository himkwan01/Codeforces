#include <bits/stdc++.h>
using namespace std;
//total = same xC2 + same yC2 - exactly C2
int main(){
	int size;
	long long total=0;
	long long a,b;
	map<pair<long long, long long>, long long> data;
	map<long long, long long> x;
	map<long long, long long> y;
	cin>>size;
	typedef map<pair<long long, long long>,long long>::iterator iter;
	typedef map<long long,long long>::iterator it;
	for(int i=0;i<size;i++){
		cin>>a>>b;
		data[make_pair(a,b)]++;
		x[a]++;
		y[b]++;
	}
	for(it i=x.begin();i!=x.end();i++){
		if(i->second>1){
			a=i->second;	//nC2
			if(a%2==0)total+= ((a/2)*(a-1));
			else total+= (((a-1)/2)*a);
		}
	}
	for(it i=y.begin();i!=y.end();i++){
		if(i->second>1){
			a=i->second;
			if(a%2==0)total+= ((a/2)*(a-1));
			else total+= (((a-1)/2)*a);
		}
	}
	for(iter i=data.begin();i!=data.end();i++){
		if(i->second>1){
			a=i->second;
			if(a%2==0)total-= ((a/2)*(a-1));
			else total-= (((a-1)/2)*a);
		}
	}
	cout<<total;
	
	return 0;
}