#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	vector<int> nums(5);
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int tmp;
		cin >> tmp;
		nums[i] = tmp;
		sum += tmp;
	}

	cout << sum / 5 << "\n";
	sort(nums.begin(), nums.end());
	cout << nums[2];

	return 0;
}