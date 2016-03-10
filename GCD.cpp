#include <iostream>
using namespace std;
int main(){
	int y, x;
	int temp;
	cin>>y>>x;
	while( y!= 0) {
           temp = x % y;
           x = y;
           y = temp;
    }
	cout<<x;
	return 0;
}