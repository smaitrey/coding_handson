#include<iostream>
using namespace std;


int count = 0;

class Test{
	public:
		Test(){
			count++;
			cout<<"\n No of object created: \t"<<count;
		}

		~ Test(){
			cout<<"\n No of object destroyed: \t"<<count;
			--count;
		}
};


int main(){
	Test t1, t2, t3, t4;
	return 0;
}
