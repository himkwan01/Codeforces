#include <bits/stdc++.h>
using namespace std;
typedef set<pair<int,string> >::iterator it;
int main(){
	int n, m, r, p;		//n teams, m regions, region r, p points
	string name;
	cin>>n>>m;
	set<pair<int,string> > s[m];	//800-p, name
	for(int i=0;i<n;i++){
		cin>>name>>r>>p;
		 s[r-1].insert(make_pair(800-p,name));
	}
	for(int i=0;i<m;i++){
		it j=s[i].begin();
		if(s[i].size()<3){
			cout<<(*j).second<<" ";
			cout<<(*(++j)).second;
		}
		else{
			
			if((*(++j)).first == (*(++j)).first)cout<<"?";
			else cout<<(*s[i].begin()).second<<" "<<(*(--j)).second;
		}
		cout<<endl;
	}
	return 0;
}