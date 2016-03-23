#include <bits/stdc++.h>
using namespace std;

int main(){
	string temp;
	int size;
	map<string, int> m;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>temp;
		m[temp]++;
		if(m[temp]==1)cout<<"OK\n";
		else cout<<temp<<m[temp]-1<<endl;
	}
	return 0;
}