#include<bits/stdc++.h>
using namespace std;


int main(){

	        string str = "aaaa";
    
    cout<<str<<endl;
    bool flag = true;
    int j = str.size();
    cout<<"Length: "<<j<<endl;
    int i = 0;
    while(i<j){
         if(str[i++] != str[j--]){
            flag = false;
	    cout<<"Fuck! Its not a palindrome"<<endl;

            //break;
            }
            
    }

    /*
       

    
    if(flag == false){
        cout<<"Not a palindrome"<<endl;
    }
    else{
        cout<<"Palindrome"<<endl;
    }
	
    */
    return 0;
}
