#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution{
public:
	string kthDistinct(vector<string> arr, int k){
		unordered_map<string,int> freq;
		for(auto& it: arr) ++freq[it]; //conteo de toda la vida
		for(auto& it: arr){
			if(freq[it]==1){
				--k;
				if(k==0) return it;
			}
		}
		return "";
	}
};

#endif // SOLUTION_HPP