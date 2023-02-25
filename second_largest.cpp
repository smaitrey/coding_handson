#include<bits/stdc++.h>
using namespace std;


float find_second_largest(float arr[], int n){
	float first, second;
	first = second = INT_MIN;
	for(int i = 0; i < n; i++){
		if( arr[i] > first){
			second = first;
			first = arr[i];
		}
		else if (arr[i] > second && arr[i] != first){
			second = arr[i];
		}
	}

	if(second != INT_MIN){
		return second;
	}

	return -1;
}


int main(){
	float arr[] = {3, 2, 40, 10, 19, 25, 50, 5};
	int size = sizeof(arr)/sizeof(arr[0]);

	float second_max = find_second_largest(arr, size);

	cout<<"\n\n The second largest element of the array is: "<<second_max<<endl;

	return 0;
}
