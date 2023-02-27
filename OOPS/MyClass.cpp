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
	MyClass Obj1; //Statically Create object of MyClass
	Obj1.myNum = 1;
	Obj1.myString = "Hello";
	strcpy(Obj1.name, "Shreyans");

	Obj1.display();

	//Dynamically create object of MyClass
	
	MyClass *Obj2 = new MyClass;
	Obj2->myNum = 2;
	Obj2->myString = "Hi";
	strcpy(Obj2->name, "Maitrey");

	Obj2->display();

	return 0;
}
