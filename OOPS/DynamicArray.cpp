#include<iostream>
using namespace std;

class DynamicArray{
	int *data;
	int nextIndex;
	int capacity;

public:
	DynamicArray(){
		data = new int[5];
		nextIndex = 0;
		capacity = 5;
	}

	// Copy Constructor
	//
	DynamicArray(DynamicArray const &d){
		//Shallow copy
		// this->data = d.data;
		// Deep Copy
		this->data = new int[d.capacity];
		for(int i = 0; i < d.nextIndex; i++){
			this->data[i] = d.data[i];
		}
		this->nextIndex = d.nextIndex;
		this->capacity = d.capacity;
	}

	// Copy assignment operator
	//
	void operator=(DynamicArray const &d){
		 this->data = new int[d.capacity];
                for(int i = 0; i < d.nextIndex; i++){
                        this->data[i] = d.data[i];
                }
                this->nextIndex = d.nextIndex;
                this->capacity = d.capacity;
        }


	void append(int element){
		if(nextIndex == capacity){
		  int *newdata = new int[2 * capacity];
		  for(int i = 0; i < capacity; i++){
			  newdata[i] = data[i];
		  }
		  delete [] data;
		  data = newdata;
		  capacity *= 2;
		
		}

		data[nextIndex] = element;
		nextIndex++;
	}


	// Get value at index i
	//
	int get(int i){
		if( i < nextIndex){
			return data[i];
		}
		else{
			return -1;
		}
	}

	// Insert element at index i
	//
	
	void append(int i, int element){
		if(i < nextIndex){
			data[i] = element;
		}
		else if(i == nextIndex){
			append(element);
		}
		else{
			return;
		}
	}

	//Print array
	
	void print(){
		for(int i = 0; i < nextIndex; i++){
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}

};



int main(){
	DynamicArray d1;
	d1.append(10);
	d1.append(20);
	d1.append(30);
	d1.append(40);
	d1.append(50);
	d1.append(60);
	d1.append(70);

	d1.print();
		
	DynamicArray d2(d1); // Copy constructor

	d1.append(0, 100);
	d1.print();
	d2.print();
	
	DynamicArray d3;
	d3 = d2;
	d3.print();
	return 0;
}



