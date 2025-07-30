#include <iostream>
#include <algorithm> // sort 등
#include <vector>
using namespace std;
int main(void)
{
	vector<int> nums;
	nums.resize(3);

	for (auto& n : nums) {
		cin >> n;
	}

	sort(nums.begin(), nums.end());
	for (auto& n : nums) {
		cout << n << " ";
	}

	return 0;
}