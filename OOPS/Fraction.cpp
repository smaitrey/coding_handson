#include<iostream>
using namespace std;



class Fraction{
	private:
		int numerator;
		int denominator;

	public:
		// Parameterized constructor
		Fraction(int numerator, int denominator){
			this->numerator = numerator;
			this->denominator = denominator;
		}

		void print(){
			cout<<this->numerator<<"/"<<this->denominator<<endl;
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


		// Function to add two fractions: f1 = f1 + f2;
		
		void add(Fraction f2){
			int lcm = this->denominator * f2.denominator;
			int x = lcm / this->denominator;
			int y = lcm / f2.denominator;

			int num = x * this->numerator + (y * f2.numerator);

			this->numerator = num;
			this->denominator = lcm;
		
			Simplify(); // this->simplify(); f1.simplify();
		}

};


int main(){
	Fraction f1(10,2);
	Fraction f2(15,4);

	f1.add(f2);

	f1.print();
	f2.print();
	return 0;
}



	
