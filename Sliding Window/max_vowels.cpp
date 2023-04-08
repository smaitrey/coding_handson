#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	bool isVowel(char c){
		return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
	}

	int maxVowels(string s, int k){
		int count = 0, ans = 0;
		for(int i = 0; i < s.size(); i++){
			if(isVowel(s[i])){
					count++;
			}

			if(i >= k && isVowel(s[i-k])){
				count--;
			}

			ans = max(ans, count);
		}

		return ans;
	}
};


int main(){

	string s = "abciiidef";
	int k = 3;

	Solution ob;
	cout<<ob.maxVowels(s, k)<<endl;

	return 0;
}
