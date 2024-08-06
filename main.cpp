#include "solution.hpp"

int main(){

	Solution solution;
	vector<string> arr={"d","b","c","b","c","a"};
	int k=2;
	string output=solution.kthDistinct(arr, k);
	cout<<"ANSWER FINAAAALLL= "<<output<<endl;

	return 0;
}
