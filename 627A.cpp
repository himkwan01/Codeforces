#include <bits/stdc++.h>
using namespace std;

/*
 * if x=s and lg(s) is int, then total=0
 * else total = x-1;
*/


bool isPrime(long long);
long long GCF(long long, long long);
int main(){
	long long s,x;
	int total=0;
	double range;
	long long factor=0;
	int t;
	cin>>s>>x;
	//cout<<s<<" "<<x<<endl;
	if(x==0 || x>s){
		if(s%2==0)cout<<"1";
		else cout<<"0";
		return 0;
	}
	if(s==x){
		if(log2(x)-static_cast<int>(log2(x))==0)cout<<"0";
		else cout<<x-1;
		return 0;
	}
	
	/*
	//find common factor to decrease the size
	while(!isPrime(x) && factor!=1){
		//cout<<"while\n";
		factor = GCF(s,x);
		//cout<<factor<<endl;
		s/=factor;
		x/=factor;
	}
	range = log(os/s);
	
	if(range - static_cast<int>(range)!=0){
		cout<<"0";
		return 0;
	}
	*/
	
	range = static_cast<double>(s)/2;
	double temprange=range;
	long long i=static_cast<double>(s)/2 - static_cast<double>(x)/2;
	cout<<i<<endl;
	if(i^(s-i)!=x){
		cout<<"0";
		return 0;
	}
	while(i<range && i<temprange){
		if((i^(s-i))==x){
			total+=2;
			if(temprange==range){
				temprange = i+x/2;
			}
			//cout<<range<<endl;
			//cout<<temprange<<endl;
		}
		i++;
	}
	/*
	for(long long i=1;i<range;i++){
		if((i^(s-i))==x){
			cout<<i<<" "<<s-i<<endl;
			total+=2;
		}
	}
	*/
	
	
	cout<<total;
	
	return 0;
}

bool isPrime(long long a){
	if(a<1)return false;
	if(a<=3)return true;
	if(a%2==0 || a%3==0)return false;
	for(long long i=5;i<sqrt(a);i+=6){
		if(a%i==0 || a%(i+2)==0)return false;
	}
	return true;
}
long long GCF(long long x, long long y){
	long long temp;
	while( y!= 0) {
           temp = x % y;
           x = y;
           y = temp;
    }
	return x;
}