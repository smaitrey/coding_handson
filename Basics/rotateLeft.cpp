#include<bits/stdc++.h>
using namespace std;


void rotateLeft(vector<int>& nums){
	int n = nums.size();
	int temp = nums[0];
	int i;
	for(i = 0; i < n-1; i++){
		nums[i] = nums[i+1];
	}
	nums[i] = temp;
}

void rotate(vector<int>& nums, int k){
	int n = nums.size();
	if(n == 0 || n == 1)
		return;
	k = k % n;
	while(k--){
		rotateLeft(nums);
	}
}


int main(){
	vector<int> v = {1,2,3,4,5,6,7};
	int k = 2;
	rotate(v, k);

	cout<<"\n\n After roating array k times ";
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
