#include<iostream>
#include<cstring>
using namespace std;


class Student{
	int age;

	public:

	char *name;
	
	// Parameterised Constructor
	//
	
	Student(int age, char *name){
		this->age = age;
		//Deep copy

		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}


	// Copy Constructor
	
	Student(Student const &s){
		this->age = s.age;
		//Shallow copy
		// this->name = name;
		//

		//Deep Copy

		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
	}

	void display(){
		cout<<name<<" "<<age;
		cout<<endl;
	}

};

int main(){
	char name[] = "shrey";
	Student s1(21, name);

	s1.display();

	Student s2(s1);

	s2.name[0] = 'x';

	s1.display();
	s2.display();

	return 0;
}
