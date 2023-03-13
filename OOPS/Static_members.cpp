#include<iostream>
using namespace std;

class Student{

	static int totalStudent;

	public:
	int rollNo;
	int age;

	Student(){
		totalStudent++;
	}

	int getRollNo(){
		return rollNo;
	}

	static int getTotalStudent(){
		return totalStudent;
	}

};

int Student :: totalStudent = 0;  // Initialize static data member

int main(){
	Student s1, s2;
	Student s3, s4, s5;

	//cout<<Student :: totalStudent<<endl;
	cout<<endl;
	cout<<Student :: getTotalStudent()<<endl;

	return 0;
}

