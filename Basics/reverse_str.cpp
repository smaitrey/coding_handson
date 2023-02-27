#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
	int i,j;
	cout<<"\n Enter any string max 80 ";
	char str[80];
	gets(str);
	int len;
	for(len = 0; str[len] != '\0'; ++len); // To find len of string

	char rev[80];
	for(i = len-1, j = 0; i >= 0; i--, j++){
		rev[j] = str[i];
	}
	rev[j] = '\0';
	cout<<"\n String in reverse order is: ";
	puts(rev);
	return 0;
}
