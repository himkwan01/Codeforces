#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//n%26-> n/26 %26 til n=0
//if v[0]==0, next -1, if next =0, next->next-1, loop
//if v[size-1]==0, do not output
void print(vector<int> v){for(int i=0;i<v.size();i++)cout<<v[i];cout<<endl;}
void rPrint(vector<int>v,int i, vector<char> c){
	if(v[i+1]!=0 && i<v.size()-2)rPrint(v,i++,c);
	cout<<c[v[i]];
}
int main(){
  int cSize=1,index,ttl=0;
	ll size,r;
	vector<int> v;
	vector<char> c;
	string temp, sub;
	bool flag;
	c.push_back('Z');
	for(int i=1;i<27;i++){
		c.push_back(64+i);
	}
	cin>>size;
	for(long long i=0;i<size;i++){
		v.clear();
		//check if first is R, then find C
		cin>>temp;
		index = temp.find('C');
		//RxCy format
		if(temp[0]=='R' && isdigit(temp[index-1])){
			flag=false;	//reset
		  sub=temp.substr(index+1,temp.size());
		  r = atoi(sub.c_str());
		  while(r>0){
		    v.push_back(r%26);
		    r/=26;
		  }
			cout<<"v size = "<<v.size()<<endl;
			print(v);
			if(v[0]==0){
				v[1]=(v[1]==0?26:v[1]-1);
				for(int j=2;v[j-1]==26 && j<v.size();j++){
					v[j]=(v[j]==0?26:v[j]-1);
				}
			}
			print(v);
			cout<<"\n\n";
		  //print first half
			// int j=v.size()-(v[0]==0?2:1);
			// cout<<"j = "<<j<<endl;
			rPrint(v,0,c);
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