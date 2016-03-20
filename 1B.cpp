#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int cSize=1;
	ll size;
	vector<int> v;
	string temp, sub;
	int ttl=0, index;
	ll r;
	cin>>size;
	cin.ignore(1);
	for(long long i=0;i<size;i++){
		v.clear();
		//check if first is R, then find C
		getline(cin,temp);
		index = temp.find('C');
		//RxCy format
		if(temp[0]=='R' && isdigit(temp[index-1])){
		  sub=temp.substr(index+1,temp.size());
		  r = atoi(sub.c_str());
		  while(r>0){
		    v.push_back(r%26);
		    r/=26;
		  }
		  for(int j=v.size()-1;j>-1;j--)
		    cout<<(char)(v[j]+64);
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