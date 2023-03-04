#include<iostream>
using namespace std;

class Student{
	int age;
	char *name;

	public:

	Student(int age, char* name){
		this->age = age;
		this->name = name; // Shallow copy
	}

	void display(){
		cout<<name<<" "<<age<<endl;
	}
};

int main(){
	char name[] = "shrey"; 
	//gets(name);
	Student s1(20, name);
	s1.display();
	name[3] = 'A';
	Student s2(21, name);
	s1.display();
	s2.display();
	return 0;
}
