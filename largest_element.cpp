#include<bits/stdc++.h>
using namespace std;

float find_largest(float arr[], int n){
	float max = arr[0];
	for(int j = 1; j < n; j++){
		if(arr[j] > max){
			max = arr[j];
		}
	}

	return max;
}


int main(){
	float amount[] = {5, 33, 13, 50, 2, 25, 18, 9, 10};

	int size = sizeof(amount)/sizeof(amount[0]);

	float large = find_largest(amount, size);

	cout<<"\n The largest element of array is: "<< large <<endl;

	return 0;
}
