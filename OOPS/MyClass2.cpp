#include<iostream>
using namespace std;

class MyClass{
	public:
		int myNum;
		string myString;

		MyClass(){
			cout<<"Default constructor called"<<endl;
		}
	
		void display(){
			cout<<"myNum: "<<myNum<<"\t"<<"myString: "<<myString<<endl;
		}

};


int main(){
	MyClass Ob1;
	Ob1.display();
	return 0;
}
