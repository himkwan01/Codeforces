#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int size;
	cin>>size;
	int temp;
	int num=0;
	long long count=0;
	for(int i=0;i<size;i++){
		cin>>temp;
		int dif=temp-num;
		count+=abs(dif);
		num+=dif;
		//v.push_back(temp);
	}
	/*count=0;
	//vector<int> old(size, v[0]);
	temp = 0;
	for(int i=0;i<size;i++){
			int dif=v[i]-temp;
			count+=abs(dif);
			temp+=dif;
			//cout<<temp<<endl;

		//for(int j=0;j<old.size();j++)cout<<old[j]<<" ";
		//cout<<endl;
	}*/
	
	cout<<count<<endl;



	return 0;
}