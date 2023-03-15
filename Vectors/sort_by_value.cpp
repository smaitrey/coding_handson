#include<bits/stdc++.h>
using namespace std;


// Sort a map by vlaue
//

bool compare(const pair<int, int> &a, const pair<int, int> &b){
	if(a.second != b.second){
		return a.second > b.second;
	}
	return a.first > b.first;

}


int main(){
	map<int, int> mp = { {1, 2}, {2, 10}, {3, 6}, {4, 8}, {5, 8}};

	cout<<"Before sorting by value \n";
	for(auto &it : mp){
		cout<<it.first<<" "<<it.second<<endl;
	}

	vector<pair<int, int>> v;
	/*
	for(auto &it: mp){
		v.push_back(make_pair(it.first, it.second));
	}
	*/

	for(auto &it: mp){
		v.push_back(it);
	}

	sort(v.begin(), v.end(), compare);

	cout<<"After sorting by vlaue \n";
	for(auto &it : v){
		cout<<it.first<<" "<<it.second<<endl;
	}

	return 0;
}
