#include <bits/stdc++.h>
using namespace std;

int main(){
	int f,n,t;
	int ttl=0;
	char c;
	cin>>f>>n>>t;
	vector<int> v(n,0);
	for(int i=0;i<f;i++){
		for(int j=0;j<n;j++){
			cin>>c;
			if(v[j]<t){
				if(c=='Y'){
					v[j]++;
					if(v[j]==t)ttl++;
				}
			}
		}
	}
	cout<<ttl;
}