#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	vector<int> num;
	num.resize(3);
	for (auto& n : num) cin >> n;

	if (num[0] == num[1] && num[1] == num[2]) {
		cout << 10000 + num[0] * 1000;
	}
	else if (num[0] != num[1] && num[0] != num[2] && num[1] != num[2]) {
		sort(num.begin(), num.end());
		cout << num[2] * 100;
	}
	else {
		if (num[0] == num[1]) cout << num[0] * 100 + 1000;
		else if (num[1] == num[2]) cout << num[2] * 100 + 1000;
		else cout << num[0] * 100 + 1000;
	}
	return 0;
}