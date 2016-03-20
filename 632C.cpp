//632C The Smallest String Concatenation
#include <bits/stdc++.h>
using namespace std;
typedef map<string,int>::iterator mit;

/*  lexicographical order
		e.g. ab, a, aac, ac, abc
		a
		aac
		ab
		abc
		ac
		
		Problem: print it backwards
 */
void printMap(mit, mit);
int main(){
	int size;
	//size input count
	map<string, int> m;
	string temp;
	string output;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>temp;
		m[temp]++;
	}
	for(mit i=m.begin();i!=m.end();i++){
		for(int j=0;j<i->second;j++){
			cout<<i->first;
		}
	}
	mit end = --m.end();
	//printMap(m.begin(),end);
	return 0;
}

void printMap(mit i, mit end){
	if(i!=end){
		mit temp = i;
		temp++;
		printMap(temp,end);
	}
	// cout<<"Size "<<i->first<<endl;
	for(int j=0;j<i->second;j++){
		// cout<<"\t"<<*j<<endl;
		cout<<i->first;
	}
}
