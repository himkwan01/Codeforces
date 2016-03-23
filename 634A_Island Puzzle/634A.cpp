#include <bits/stdc++.h>
using namespace std;

//codeforces 634A

/*
input
3
1 0 2
2 0 1
output
YES
input
2
1 0
0 1
output
YES
input
4
1 2 3 0
0 3 2 1
output
NO
*/

int main(){
	int size;
	int temp;
	int index;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>temp;
		if(temp!=0)
			v1.push_back(temp);
	}
	for(int i=0;i<size;i++){
		cin>>temp;
		if(temp!=0){
			v2.push_back(temp);
			if(temp == v1[0])index = v2.size()-1;
		}
	}
	for(int i=index;i<v2.size();i++){
		v3.push_back(v2[i]);
	}
	for(int i=0;i<index;i++){
		v3.push_back(v2[i]);
	}
	/*
	for(int i=0;i<v2.size();i++){
		cout<<v1[i]<<"  "<<v3[i]<<endl;
	}
	*/
	
	for(int i=0;i<v1.size();i++){
		if(v1[i]!=v3[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	
	return 0;
}