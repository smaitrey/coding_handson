#include<bits/stdc++.h>
using namespace std;


void rotateRight(vector<int>& nums){
	int n = nums.size();
	int temp = nums[n-1];
	int i;
	for(i = n-1; i > 0; i--){
		nums[i] = nums[i-1];
	}
	nums[i] = temp;
}

void rotate(vector<int>& nums, int k){
	int n = nums.size();
	if(n == 0 || n == 1) return;
	k = k % n;
	while(k--){
		rotateRight(nums);
	}
}

int main(){
	vector<int> nums = {1,2,3,4,5,6,7};

	int k = 2;
	rotate(nums, k);
	cout<<"\n\n After roating array k times ";
	for(int i = 0; i < nums.size(); i++){
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	return 0;
}
