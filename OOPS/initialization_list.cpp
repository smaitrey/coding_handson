#include<iostream>
using namespace std;


class Student{
public:
	int age;
	const int rollNo;
	int &x;

	Student(int r, int age): rollNo(r), age(age), x(this->age){};

	void display(){
		cout<<age<<" "<<rollNo<<" "<<(x)<<endl;
	}
};


int main(){
	Student s1(100, 21);
	s1.display();
	return 0;
}

