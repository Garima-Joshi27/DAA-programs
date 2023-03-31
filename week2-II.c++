 
#include <bits/stdc++.h>
using namespace std;

 
bool findTriplet(vector<int> nums)
{
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			for (int k = j + 1; k < nums.size(); k++) {
			 
				if (nums[i] < nums[k] && nums[k] < nums[j])
					return true;
			}
		}
	}
	 
	return false;
}

 
int main()
{ 
	vector<int> arr = { 4, 7, 5, 6 };
    if (findTriplet(arr)) {
		cout << " found" << '\n';
	}
	else {
		cout << " No sequence found" << '\n';
	}
	return 0;
}








