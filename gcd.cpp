#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	gcd(b, a%b);
}

int main(){
	int a,b;
	cout<<"Enter two numbers to find gcd \n";
	cin>>a>>b;
	int res = gcd(a, b);
	cout<<"gcd of a and b is: "<< res << endl;
	return 0;
}

