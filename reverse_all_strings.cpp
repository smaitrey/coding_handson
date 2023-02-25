#include<bits/stdc++.h>
using namespace std;


int main(){
	char strings[3][31], ch;
	int i,j,len,k;
	cout<<"Enter 3 strings\n";
	for(i = 0; i < 3; i++) {
		cin.getline(strings[i], 31);
	}
	cout<<"\n The List of original strings follows: ";
	for(i = 0; i < 3; i++){
		cout<<"\n"<< strings[i];
	}
	for(i = 0; i < 3; i++){
		len = strlen(strings[i]);
		for(j =0, k = len-1; j < len/2; j++,k--){
			ch = strings[i][j];
			strings[i][j] = strings[i][k];
			strings[i][k] = ch;
		}
	}
	cout<<"\n\n Thelist of reversed strings follows: \n";
	for( i = 0; i < 3; i++){
		cout<<"\n"<<strings[i];
	}

	return 0;
}


