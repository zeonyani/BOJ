#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0); // 코테 속도 up

	int tmp; // 숫자 받을 임시 변수
	vector<int> odds; // 홀수만 저장할 벡터 (사이즈 미지정)
	int sum = 0;
	for (int i = 0; i < 7; i++) { // 7회 숫자 받음
		cin >> tmp;
		if (tmp % 2 == 1) odds.push_back(tmp);
	}
	sort(odds.begin(), odds.end());
	if (odds.size() == 0) cout << "-1";
	else {
		for (int i = 0; i < odds.size(); i++) {
			sum += odds[i];
		}
		cout << sum << "\n";
		cout << odds[0];
	}
	
	return 0;
}