#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void rotate(vector<int>& nums, int k){
			int n = nums.size();
			k = k % n;
			reverse(nums.begin(), nums.end());
			reverse(nums.begin(), nums.begin() + k);
			reverse(nums.begin() + k, nums.end());
		}
};

int main(){
	vector<int> nums = {1,2,3,4,5,6,7};
	int k = 2;
	Solution ob;
	ob.rotate(nums, k);

	cout<<"\n\n After roating array k times ";
	for(int i = 0; i < nums.size(); i++){
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	return 0;
}
