#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> m(5,0);
	int size,temp,ttl=0;
	
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>temp;
		m[temp]++;
	}
	ttl+=m[4];
	ttl+=m[3];
	ttl+=(m[2]/2);
	m[2]%=2;
	if(m[3]<m[1]){
		m[1]-=m[3];
		ttl+=m[2];
		m[1]-=(2*m[2]);
		if(m[1]>0)ttl+=((m[1]-1)/4+1);
	}
	else{
		ttl+=m[2];
	}
	cout<<ttl;
	return 0;
}