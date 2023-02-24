#include<bits/stdc++.h>
using namespace std;

void reverse_str(string& s){
	int len = s.length();
	for(int i = 0; i < len/2; i++){
		swap(s[i], s[len-i-1]);
	}
}

int main(){
	string s = "hello world";
	reverse_str(s);
	cout<<"Reverse string is: "<<s;
	return 0;
}
