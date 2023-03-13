#include<iostream>
using namespace std;


class Fraction {
private:
	int numerator;
	int denominator;

public:
	Fraction(){};

	Fraction(int numrator, int denominator){
		this->numerator = numerator;
		this->denominator = denominator;
	}

	int getNumrator() const{
		return numerator;
	}

	int getDenominator() const{
		return denominator;
	}

	void setDenominator(int n){
		numerator = n;
	}

	void setNumerator(int n){
		denominator = n;
	}

	void print() const{
		cout<<this->numerator<<" "<<this->denominator<<endl;
	}

};

int main(){
	Fraction f1(10,2);
	Fraction f2(15,4);

	Fraction const f3;
	cout<<f3.getNumrator()<<" "<<f3.getDenominator()<<endl;

	// Not allowed since f3 is constant object
	// f3.setNumerator(101);
	return 0;
}
