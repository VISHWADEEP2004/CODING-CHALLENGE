You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.

OUTPUT:

#include <iostream>
using namespace std;
int main() {
	int st,ed,d;
	cin>>st>>ed>>d;
	int count=0;
	for(int i=st;i<=ed;i++){
		if(i%d==0)
			count++;
	}
	cout<<count;
}
