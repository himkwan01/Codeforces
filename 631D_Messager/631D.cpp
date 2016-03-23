#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	vector<long long> n1;
	vector<long long> n2;
	string reduce1;
	string reduce2;
	set<char> character;
	string temp;
	int size;
	long long total=0;
	int tempsize;
	bool all_one=true;
	int charSize;
	cin>>temp;
	//cout<<temp<<endl;
	a=atoi(temp.c_str());
	cin>>temp;
	b=atoi(temp.c_str());
	//cin>>a>>b;
	//cout<<a<<" "<<b<<endl;
	//cin.ignore();
	tempsize=a;
	//input second line
	for(int i=0;i<a;i++){
		cin>>size;
		cin>>temp;
		character.insert(temp[1]);
		//exceptional first one
		if(i==0){
			n1.push_back(size);
			reduce1+=temp[1];
			charSize = size;
			//cout<<size<<temp<<endl;
		}
		//combine same adjacent char
		else if(temp[1]==reduce1[reduce1.size()-1]){
			n1[n1.size()-1]+=size;
			tempsize--;
		}
		else{
			n1.push_back(size);
			reduce1+=temp[1];
		}
		if(n1[n1.size()-1]!=charSize)all_one=false;
	}
	a=tempsize;
	tempsize=b;
	if(a<b){
		cout<<"0";
		return 0;
	}
	//input third line
	for(int i=0;i<b;i++){
		cin>>size;
		cin>>temp;
		if(i==0){
			n2.push_back(size);
			reduce2+=temp[1];
			//cout<<size<<temp<<endl;
		}
		//combine same adjacent char
		else if(temp[1]==reduce2[reduce2.size()-1]){
			n2[n2.size()-1]+=size;
			tempsize--;
		}
		else{
			n2.push_back(size);
			reduce2+=temp[1];
		}
		if(n2[n2.size()-1]!=charSize)all_one=false;
		if(character.find(temp[1])==character.end()){
			cout<<"0";
			return 0;
		}
	}
	b=tempsize;
	//cout<<"a = "<<a<<endl;
	//cout<<"b = "<<b<<endl;
	long long pos = reduce1.find(reduce2);
	//cout<<"pos = "<<pos<<endl;
	if(all_one && b>1){
		while(pos!=-1 && pos<reduce1.size() && reduce1.size()-pos>=b){
			total++;
			pos=reduce1.find(reduce2, pos+1);
		}
	}
	//b=1
	else{
		if(b==1){
			while(pos!=-1 && pos<reduce1.size()){
				if(n1[pos]>=n2[0])
					total+=(n1[pos]-n2[0]+1);
				pos = reduce1.find(reduce2,pos+1);
			}
		}
		//b>1
		else{
			//cout<<"b>1";
			//cout<<"pos = "<<pos<<endl;
			while(pos!=-1 && pos<reduce1.size()){
				bool add = true;
				//check middle
				if(b>2){
					for(int i=1;i<b-1 && add;i++)
						if(n1[i+pos]!=n2[i])add=false;
				}
				if(n1[pos]<n2[0] && add)add=false;			//check first
				if(n1[pos+b-1]<n2[b-1] && add)add=false;	//check last
				if(add)total++;
				pos = reduce1.find(reduce2,pos+1);
			}
		}//b>1
	}//not all_one
	cout<<total;
	//cout<<endl;
	//cout<<reduce1<<endl;
	//cout<<reduce2<<endl;
	
	return 0;
}