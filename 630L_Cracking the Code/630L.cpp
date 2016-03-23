#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  //format: 02431
	string temp;
	ll in,out=0;
	getline(cin,temp);
	//swap
	temp[1]=temp[1]^temp[2];
	temp[2]=temp[1]^temp[2];
	temp[1]=temp[1]^temp[2];
	temp[2]=temp[2]^temp[4];
	temp[4]=temp[2]^temp[4];
	temp[2]=temp[2]^temp[4];
	//change to ll
	in=atoi(temp.c_str());
	
	out=(in*in)%100000ll;
	out=(out*out)%100000ll;
	out=(out*in)%100000ll;
	if(out<10)cout<<"0000";
	else if(out<100)cout<<"000";
	else if(out<1000)cout<<"00";
	else if(out<10000)cout<<"0";
		cout<<out<<endl;
	return 0;
}