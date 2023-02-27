#include<iostream>
#include<string.h>
using namespace std;


class MyClass{
	public:
		int myNum;
		string myString;
		char name[30];

		void display(){
			cout<<myNum<<" "<<myString<<" "<<name<<endl;
		}
};

int main(){
	MyClass Obj1; //Create object of MyClass
	Obj1.myNum = 1;
	Obj1.myString = "Hello";
	strcpy(Obj1.name, "Shreyans");

	Obj1.display();

	return 0;
}
