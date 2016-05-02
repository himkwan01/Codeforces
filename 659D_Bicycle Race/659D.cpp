#include <bits/stdc++.h>
using namespace std;

int main(){
	int size,ttl=0;
	int x1,y1,x2,y2;
	//1=top,2=right,3=bottom,4=left
	int prev=1, curr;	
	cin>>size;
	cin>>x1>>y1>>x1>>y1;
	for(int i=1;i<size;i++){
		cin>>x2>>y2;
		if(x2==x1){
			if(y2>y1)curr=1;
			else curr=3;
		}
		else if(x2>x1)curr=2;
		else curr=4;
		if(prev==1 && curr==4)ttl++;
		else if(prev==2 && curr==1)ttl++;
		else if(prev==3 && curr==2)ttl++;
		else if(prev==4 && curr==3)ttl++;
		x1=x2;
		y1=y2;
		prev=curr;
	}
	cout<<ttl;
	return 0;
}