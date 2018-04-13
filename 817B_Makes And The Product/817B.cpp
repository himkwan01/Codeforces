#include <bits/stdc++.h>
using namespace std;

// up to r = 3
long long ncr(int n,int r){
  long long res = n;
  if(n-r<r)
    r = n-r;
  if(r>1){
    res/=2;
    res *= (n-1);
  }
  if(r>2){
    res/=3;
    res *= (n-2);
  }
  return res;
}
int main(){
  int n,temp;
  cin>>n;
  map<long long,long long> m;
  for(int i=0;i<n;i++){
    cin>>temp;
    m[temp]=m.find(temp)==m.end()?1:m[temp]+1;
  }
  map<long long,long long>::iterator it = m.begin();
  long long res = 1;
  for(long long i=3;i>0;it++){
    long long temp = it->second;
    if(temp>0){
      if(temp<=i){
        i-=temp;
        temp = 1;
      }
      else{
        res *= ncr(temp,i);
        i=0;
      }
    }
  }
  cout<<res;
  return 0;
}
