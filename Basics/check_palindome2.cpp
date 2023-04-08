#include<bits/stdc++.h>
using namespace std;


int main(){
	string str = "abcdefedcba";
	int len = str.length();
	int flag = 1;
	for(int i = 0; i < len / 2; i++){
		if(str[i] != str[len-i-1]){
			//cout<<"Not a palindrome"<<endl;
			flag = 0;
		}
	}
	if(flag == 0){
		cout<<"Not a palindrome"<<endl;
	}
	else{
		cout<<"Palindrome"<<endl;
	}

	return 0;
}

