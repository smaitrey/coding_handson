#include<iostream>
using namespace std;

int main(){
	char line[100];
	int vow_cnt = 0;
	cout<<"\n Enter the line: "<<endl;
	gets(line); // gets is used to read string
	for(int i = 0; line[i] != '\0'; i++){
		switch(line[i]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'U':
			case 'u': ++vow_cnt;
		}
	}
	cout<<"\n Total no of vowels in the line is: "<< vow_cnt<<endl;
	return 0;
}


