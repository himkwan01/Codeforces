#include <bits/stdc++.h>
using namespace std;
int fact(int n){
  int res = 1;
  for(int i=2;i<=n;i++){
    res*=i;
  }
  return res;
}
int main(){
  int x,y;
  cin>>x>>y;
  int z = x>y?fact(y):fact(x);
  cout<<z;
  return 0;
}
