#include <bits/stdc++.h>
using namespace std;
typedef map<string,int>::iterator it;
typedef map<int,string>::iterator it2;

int main(){
	int size;
	string temp;
	map<string,int> m1;
	map<int,string> m2;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>temp;
		m1[temp]=i;
		// cout<<"before insert m1.size = "<<m1.size()<<endl;
	}
	if(m1.size()==1){cout<<m1.begin()->first;return 0;}
	for(it i=m1.begin();i!=m1.end();i++){
		m2[size-i->second]=i->first;
	}
	for(it2 i=m2.begin();i!=m2.end();i++){
		cout<<i->second<<endl;
	}
	return 0;
}