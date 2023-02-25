#include<bits/stdc++.h>
using namespace std;



int main(){

	char str[80],word[80];
	cout<<"Enter any string (max 80 character) "<<endl;
	gets(str);
	strcat(str, " ");
	int i, k = 0;
	for( i = 0; str[i] != '\0'; i++){
		if(str[i] != ' '){
			word[k] = str[i];
			k += 1;
		}
		else{
			while(k > 0){
				k -= 1;
				cout<<word[k];
			}
			cout<<str[i];
		}
	}
	cout<<endl;
	return 0;
}
