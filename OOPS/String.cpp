#include<iostream>
#include<cstring>
#include<stdio.h>

using namespace std;


class String{

	private:
		char* s;
		int size;

	public:
		//Parameterized constructor
		String(const char* str = NULL);

		//Copy Constructor

		

		//Destructor
		~String(){
			delete [] s;
		}

		 //Copy Constructor

                String(const String&);


		void display(){
			cout<<s<<endl;
		}

		void change_str(const char*);

};

//Parameterized Constuctor definition
String::String(const char *str){
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s, str);
}

//Copy Constructor definition
//

String::String(const String& t){
	size = t.size;
	s = new char[size+1];
	strcpy(s, t.s);
}

void String::change_str(const char* str){
	delete [] s;
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

int main(){
	String str1("Shreyans"); //Parameterised constructor
	String str2(str1); //Copy Constructor
	str1.display();
	str2.display();
	str2.change_str("Maitrey");
	str1.display();
	str2.display();
	return 0;
}



