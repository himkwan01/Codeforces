#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int chk(char);
//ascii only ) - ( == 1, else ==2
int main(){
	string in;
	vector<char> left;
	ll size,ttl=0;
	int weight=0, temp;
	cin>>in;
	size = in.size();
	if(size%2!=0){
		cout<<"Impossible";
		return 0;
	}
	for(int i=0;i<size;i++){
		temp=chk(in[i]);
		weight+=temp;
		if(weight<0){
			cout<<"Impossible";
			return 0;
		}
		if(temp==1){
			left.push_back(in[i]);
		}
		else{
			if(in[i]==')'){
				if(in[i]-left[left.size()-1]!=1)ttl++;
			}
			else if(in[i]-left[left.size()-1]!=2)ttl++;
			left.pop_back();
		}
	}
	if(left.size()!=0){
		cout<<"Impossible";
		return 0;
	}
	cout<<ttl;
	return 0;
}
int chk(char a){
	return (a=='<'||a=='{'||a=='['||a=='(')?1:-1;
}