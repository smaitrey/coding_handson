#include<iostream>
using namespace std;

class Point{
	private:
		double x,y;
	public:
		//Parameterised Constructor

		Point(double px, double py){
			x = px;
			y = py;
		}

		void display(){
			cout<<"X = "<<x<<" "<<"Y ="<<y<<endl;
		}
};

int main(){
	Point a = Point(5,6);
	Point b(10,12);
	Point c(a);
	Point d(b);
	a.display();
	b.display();
	c.display();
	d.display();
	return 0;
}
