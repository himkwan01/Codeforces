#include <bits/stdc++.h>
using namespace std;
typedef set<int>::iterator it;

int main(){
	int size,temp;
	set<int> ball;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>temp;
		ball.insert(temp);
	}
	if(ball.size()<3){
		cout<<"NO";
		return 0;
	}
	it next = ++ball.begin();
	it end = --ball.end();
	next++;
	end--;
	for(it i=ball.begin();i!=end;i++,next++){
		if(*next-*i<3){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}