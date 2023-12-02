Sum of even & odd:

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s = to_string(n);
	int l = s.length();
	int even=0,odd=0;
	for(int i=0;i<l;i++){
		int digit = s[i] - '0';
		if(digit%2==0)
			even+=digit;
		else
			odd+=digit;
	}
	cout<<even<<" "<<odd;
	
}
