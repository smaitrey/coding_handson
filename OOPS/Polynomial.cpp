
/*
Implement a polynomial class, with following properties and functions.
Properties :
1. An integer (lets say A) which holds the coefficient and degrees. Use array indices as degree and A[i] as coefficient of ith degree.
2. An integer holding total size of array A.
Functions :
1. Default constructor
2. Copy constructor
3. setCoefficient -
This function sets coefficient for a particular degree value. If the given degree is greater than the current capacity of polynomial, increase the capacity accordingly and add then set the required coefficient. If the degree is within limits, then previous coefficient value is replaced by given coefficient value
4. Overload "+" operator (P3 = P1 + P2) :
Adds two polynomials and returns a new polynomial which has result.
5. Overload "-" operator (P3 = p1 - p2) :
Subtracts two polynomials and returns a new polynomial which has result
6. Overload * operator (P3 = P1 * P2) :
Multiplies two polynomials and returns a new polynomial which has result
7. Overload "=" operator (Copy assignment operator) -
Assigns all values of one polynomial to other.
8. print() -
Prints all the terms (only terms with non zero coefficients are to be printed) in increasing order of degree.
Print pattern for a single term : <coefficient>"x"<degree>
And multiple terms should be printed separated by space. And after printing one polynomial, print new line. For more clarity, refer sample test cases
Input Format :
Line 1 : N, total number of terms in polynomial P1
Line 2 : N integers representing degree of P1 (separated by space)
Line 3 : N integers representing coefficients of P1 (separated by space)
Line 4 : M, total number of terms in polynomial P2
Line 5 : M integers representing degree of P2 (separated by space)
Line 6 : M integers representing coefficients of P2 (separated by space)
Line 7 : Integer C, choice representing the function to be called (See main for more details)
Sample Input 1 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
1


Sample Output 1 :
4x0 3x1 -3x2 3x3 -4x5
Sample Input 2 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
2
Sample Output 2 :
-4x0 -1x1 3x2 1x3 -4x5
Sample Input 3 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
3
Sample Output 3 :
4x1 2x2 5x3 5x4 -22x5 -6x6 12x7 -4x8
*/







#include<iostream>
#include<climits>
#include<vector>

using namespace std;

class Polynomial{
	int *degCoeff;
	int capacity;

public:

	// Default Constructor
	
	Polynomial(){
		this->degCoeff = new int[5];
		this->capacity = 5;
		for(int i = 0; i < this->capacity; i++){
			this->degCoeff[i] = 0;
		}
	}


	//Making paramaterised constructor for defining with capacity
	
	Polynomial(int capacity){
		this->degCoeff = new int[capacity];
		this->capacity = capacity;
		for(int i = 0; i < this->capacity; i++){
                        this->degCoeff[i] = 0;
                }
	}

	
	//Copy constructor
	
	Polynomial(Polynomial const &p){
		int *newdeg = new int[p.capacity];
		for(int i = 0; i < p.capacity; i++){
			newdeg[i] = p.degCoeff[i];
		}
		//delete [] degCoeff;
		this->degCoeff = newdeg;
		this->capacity = p.capacity;
	}




	void setCoeff(int deg, int coeff){
		if(deg >= capacity){
			int newcapacity = 2 * capacity;
			int *newdegCoeff = new int[newcapacity];
			for(int i = 0; i < capacity; i++){
				newdegCoeff[i] = degCoeff[i];
			}
			
			for(int i = capacity; i < newcapacity; i++){
				newdegCoeff[i] = 0;
			}
			
			delete [] degCoeff;
			//newdegCoeff = degCoeff;
			this->degCoeff = newdegCoeff;
			this->capacity = newcapacity;
			degCoeff[deg] = coeff;
		}

		degCoeff[deg] = coeff;
	}

	Polynomial operator+(Polynomial const &P2){
		int newcap = max(this->capacity, P2.capacity);
		Polynomial P3(newcap);

		for(int i = 0; i < newcap; i++){
			if(i < this->capacity && i < P2.capacity){
				P3.degCoeff[i] = this->degCoeff[i] + P2.degCoeff[i];
			}
			else if(i < this->capacity){
				P3.degCoeff[i] = this->degCoeff[i];
			}
			else{
				P3.degCoeff[i] = P2.degCoeff[i];
			}
		}

		return P3;
	}

	
	
	
	 Polynomial operator-(Polynomial const &P2){
                int newcap = max(this->capacity, P2.capacity);
                Polynomial P3(newcap);

                for(int i = 0; i < newcap; i++){
                        if(i < this->capacity && i < P2.capacity){
                                P3.degCoeff[i] = this->degCoeff[i] - P2.degCoeff[i];
                        }
                        else if(i < this->capacity){
                                P3.degCoeff[i] = this->degCoeff[i];
                        }
                        else{
                                P3.degCoeff[i] = P2.degCoeff[i];
                        }
                }

                return P3;
        }

	Polynomial operator*(Polynomial const &P2){
		int newcap = this->capacity + P2.capacity;
		Polynomial P3(newcap);

		for(int i = 0; i < this->capacity; i++){
			for(int j = 0; j < P2.capacity; j++){
				P3.degCoeff[i+j] += this->degCoeff[i] * P2.degCoeff[j];
			}
		}

		return P3;
	}

	void operator=(Polynomial const &p){
		int *newdeg = new int[p.capacity];
		//this->degCoeff = new int[p.capacity];
		//Copy the contents
		for(int i = 0; i < p.capacity; i++){
			newdeg[i] = p.degCoeff[i];
			//this->degCoeff[i] = p.degCoeff[i];
		}

		delete [] degCoeff;

		this->degCoeff = newdeg;
		this->capacity = p.capacity;
	}

	void print(){
		for(int i = 0; i < capacity; i++){

			if(degCoeff[i] != 0){
				cout<<degCoeff[i]<<"x"<<i<<" ";
			}
		}
		cout<<endl;
	}

};



int main(){
	/*
	Polynomial p1;
	p1.setCoeff(0, 90);
	p1.setCoeff(3, 5);
	p1.setCoeff(7, 10);
	p1.setCoeff(9, 19);
	p1.print();
	*/


	int n1, n2, ch;

	cin>>n1;
	int *degree1 = new int[n1];
	int *coeff1 = new int[n1];

	for(int i = 0; i < n1; i++){
		cin>>degree1[i];
	}

	for(int i = 0; i < n1; i++){
		cin>>coeff1[i];
	}

	Polynomial p1;
	for(int i = 0; i < n1; i++){
		p1.setCoeff(degree1[i], coeff1[i]);
	}

	cin>>n2;
	int *degree2 = new int[n2];
	int *coeff2 = new int[n2];

	for(int i = 0; i < n2; i++){
		cin>>degree2[i];
	}

	for(int i = 0; i < n2; i++){
		cin>>coeff2[i];
	}

	Polynomial p2;
	for(int i = 0; i < n2; i++){
		p2.setCoeff(degree2[i], coeff2[i]);
	}


	p1.print();
	p2.print();

	cin>>ch;

	switch(ch){
		case 1:
		{
			Polynomial result1 = p1 + p2;
			result1.print();
			break;
		}
		case 2:
		{
			Polynomial result2 = p1 - p2;
			result2.print();
			break;
		}
		case 3:
		{
			Polynomial result3 = p1 * p2;
			result3.print();
			break;
		}
		case 4: // Copy contructor
		{
			cout<<"Copy constructor"<<endl;
			p1.print();
			Polynomial p5(p1);
			cout<<"Copy constructor"<<endl;
			p5.print();
			break;
		}
		case 5: // Copy assignment operator
		{
			cout<<"Copy assignment operator"<<endl;
			p1.print();
			Polynomial p4;
			p4 = p1;
			cout<<"Copy assignment operator"<<endl;
			p4.print();
			break;
		}



	}
	return 0;
}
