#include<iostream>
using namespace std;


class Complex{
	private:
		int real;
		int imag;

	public:
		//Parameterized Constructor

		Complex(int real, int imag){
			this->real = real;
			this->imag = imag;
		}

		void print(){
			cout<<this->real<<"+"<<this->imag<<"i"<<endl;
		}

		// Function to add two complex numbers
		//

		void plus(Complex const &c2){
			this->real = this->real + c2.real;
			this->imag = this->imag + c2.imag;
		}

		void multiply(Complex const &c2){
			int a1 = this->real * c2.real;
			int a2 = this->imag * c2.imag;
			int a3 = this->real * c2.imag + this->imag * c2.real ;

			this->real = (a1 - a2);
			this->imag = a3;

		}

};


int main(){
	int real1, imag1, real2, imag2;
	cin>>real1>>imag1;
	cin>>real2>>imag2;

	Complex c1(real1, imag1);
	Complex c2(real2, imag2);

	int choice;
	cin>>choice;

	if(choice == 1){
		c1.plus(c2);
		c1.print();
	}
	else if (choice == 2){
		c1.multiply(c2);
		c1.print();
	}

	return 0;

}
