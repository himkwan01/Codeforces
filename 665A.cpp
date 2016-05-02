#include <bits/stdc++.h>
using namespace std;
//665A
int main(){
	//change xx:xx to min
	int afreq,atime;
	int bfreq,btime;
	int latest;
	int hour,min;
	int bus=0,total=0,temp=0;
	cin>>afreq>>atime>>bfreq>>btime;
	cin>>hour;cin.get();cin>>min;
	
	if(hour>=5)hour-=5;
	min+=(hour*60);
	latest = (24-5)*60-min-1;
	cout<<"latest  = "<<latest<<endl;
	while(temp+btime<min)temp+=bfreq;
	bus+=min-temp;
	//travelling time
	for(int i=0;i<atime;i++){
		if(bus<=0)break;
		if(bus>0 &&(bus+i==btime-1 || bus+i==btime)){
				total++;
				if(i<=latest)bus-=bfreq;
				else if(i>latest && i-bus+bfreq <latest)bus-=bfreq;
		}
		bus++;
	}
	cout<<total;
	return 0;
}