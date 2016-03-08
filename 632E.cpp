#include <bits/stdc++.h>
using namespace std;
/*
A thief made his way to a shop.

As usual he has his lucky knapsack with him. The knapsack can contain k objects. There are n kinds of products in the shop and an infinite number of products of each kind. The cost of one product of kind i is ai.

The thief is greedy, so he will take exactly k products (it's possible for some kinds to take several products of that kind).

Find all the possible total costs of products the thief can nick into his knapsack.

Input
The first line contains two integers n and k (1 ≤ n, k ≤ 1000) — the number of kinds of products and the number of products the thief will take.

The second line contains n integers ai (1 ≤ ai ≤ 1000) — the costs of products for kinds from 1 to n.

Output
Print the only line with all the possible total costs of stolen products, separated by a space. The numbers should be printed in the ascending order.

Examples
input
3 2
1 2 3
output
2 3 4 5 6
input
5 5
1 1 1 1 1
output
5
input
3 3
3 5 11
output
9 11 13 15 17 19 21 25 27 33
*/
/*
	4 3
	a b c d
	4a, 4a+(b-a) = (3a+b)
*/
//1 2 3 4 
//4 8 12 16
//5 6 7
//6 8 10
int main(){
	int num;
	int size;
	int temp;
	typedef set<int>::iterator iter;
	set<int> cost;
	set<int> outcome;
	cin>>num>>size;
	for(int i=0;i<num;i++){
		cin>>temp;
		if(cost.insert(temp).second)outcome.insert(temp*size);	//get all same items
	}
	for(iter it1=cost.begin();it1!=cost.end();it1++){
		
	}
	
	return 0;
}