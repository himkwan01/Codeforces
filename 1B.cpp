#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int cSize=1;
	ll size;
	vector<int> v;
	vector<char> c;
	for(int i=0;i<26;i++){
		c.push_back(65+i);
	}
	string temp, sub;
	int ttl=0, index;
	ll r;
	cin>>size;
	for(long long i=0;i<size;i++){
		v.clear();
		//check if first is R, then find C
		cin>>temp;
		cout<<temp<<endl;
		index = temp.find('C');
		//RxCy format
		if(temp[0]=='R' && isdigit(temp[index-1])){
		  sub=temp.substr(index+1,temp.size());
		  r = atoi(sub.c_str());
			cout<<"r ="<<r<<endl;
		  while(r>0){
		    v.push_back(r%26);
		    r/=26;
		  }
		  for(int j=v.size()-1;j>-1;j--){
					int index=(v[j]-1==-1?25:v[j]-1);
					cout<<c[index];
				}
		  for(int j=1;j<index;j++)
		    cout<<temp[j];
		  cout<<endl;
		}
		
		else{
			cout<<"R";
			ttl=0;
			index=0;
			cSize=1;
			while(!isdigit(temp[index]))index++;
			for(int j=index-1;j>-1;j--,cSize*=26)
				ttl+=(((int)temp[j]-64)*cSize);
			for(;index<temp.length();index++)
				cout<<temp[index];
			cout<<"C"<<ttl<<endl;
		}
	}
	return 0;
}