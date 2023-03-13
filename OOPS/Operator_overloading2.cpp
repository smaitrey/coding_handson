#include<iostream>
using namespace std;
//#include "Fraction.cpp"

class Fraction{
private:
	int numerator;
	int denominator;
public:
	Fraction(int numerator, int denominator){
		this->numerator = numerator;
		this->denominator = denominator;
	}

	void print(){
		cout<<this->numerator<<" "<<this->denominator<<endl;
	}

	// Function to simplify Fraction
                void Simplify(){
                        int gcd = 1;
                        int j = min(this->numerator, this->denominator);
                        for(int i = 2; i <= j; i++){
                                if(this->numerator % i == 0 && this->denominator % i == 0){
                                        gcd = i;
                                }
                        }
                        this->numerator = this->numerator / gcd;
                        this->denominator = this->denominator / gcd;
                }
	
	
	/* Invalid definition
	void operator++(){
		numerator = numerator + denominator;
		Simplify();
	}
	*/

	Fraction& operator++(){
		numerator = numerator + denominator;
		Simplify();
		return *this;
	}

};

int main(){
	Fraction f1(10,2);

	f1.print();
	++f1;

	f1.print();
	
	Fraction f2 = ++f1;
	f2.print();

	
	Fraction f3(20, 2);
	Fraction f4 = ++(++f3);
	f3.print();
	f4.print();

	return 0;

}


