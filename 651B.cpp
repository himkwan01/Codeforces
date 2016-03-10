#include <bits/stdc++.h>
using namespace std;
struct compare{
	bool operator()(const pair<int,int>& left,const pair<int,int>& right) const{
		return left.second < right.second;
	}
};
int main(){
	int size;
	int temp;
	map<int,int> data;
	int output=0;
	typedef map<int,int>::iterator iter;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>temp;
		data[temp]++;
	}
	while(data.size()>1){
		//get min iterator
		iter it = min_element(data.begin(),data.end(),compare());
		int min = it->second;
		//update the output
		output+=(min*(data.size()-1));
		//cout<<output<<endl;
		//erase the minimum value's element
		//data.erase(it);
		//check if there is any same min value element
		do{
			data.erase(it);
			it = min_element(data.begin(),data.end(),compare());
		}while(min==it->second);
		for(iter i=data.begin();i!=data.end();i++){
			i->second-=min;
		}
	}
	//cout<<data.size();
	
	cout<<output;
	return 0;
}