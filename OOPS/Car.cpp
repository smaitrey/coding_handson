#include<iostream>
using namespace std;


class Car{
	public:
		string brand;
		string model;
		int year;

		//Parameterized constructor

		Car(string x, string y, int z){
			brand = x;
			model = y;
			year = z;
		}

		void display(){
			cout<<brand<<" "<<model<<" "<<year<<endl;
		}

};


int main(){
	Car mycar1("BMW", "XX%", 1999);
	Car mycar2("ford", "YY8", 2000);
	mycar1.display();
	mycar2.display();
	return 0;
}
