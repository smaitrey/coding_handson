#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int longestContinuousSubstring(string s){
		int ans = INT_MIN;
		int count = 1;
		if(s.size() == 1){
			return count;
		}

		for(int i = 0; i < s.size() - 1; i++){
			if(((s[i + 1] - 'a') - (s[i] - 'a')) == 1){
				count++;
			}
			else{
				count = 1;
			}

			ans = max(ans, count);

		}

		return ans;
	}

};

int main(){
	string s = "abcde";
	Solution ob;
	cout<<ob.longestContinuousSubstring(s)<<endl;
	return 0;
}
		


