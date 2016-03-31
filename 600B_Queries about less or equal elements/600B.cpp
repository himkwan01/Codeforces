#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<ll,ll>::iterator it;
int main(){
  map<ll,ll> a;
  map<ll,ll> b;
  vector<ll> p;
  ll sa,sb,temp;
  cin>>sa>>sb;
  for(ll i=0;i<sa;i++){
    cin>>temp;
    a[temp]++;
  }
  for(ll i=0;i<sb;i++){
    cin>>temp;
    p.push_back(temp);
    b[temp]=0;
  }
  it i = a.begin();
  it end = b.begin();
  for(;i->first<=end->first && i!=a.end();i++){
    end->second+=i->second;
  }
  end++;
  it j=b.begin(); //j= previous
  for(;end!=b.end();end++,j++){
    end->second=j->second;
    for(;i->first<=end->first && i!=a.end();i++){
      end->second+=i->second;
    }
  }
  for(ll k=0;k<sb;k++){
    cout<<b[p[k]]<<" ";
  }
	return 0;
}