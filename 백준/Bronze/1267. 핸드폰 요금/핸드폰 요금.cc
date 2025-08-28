#include <iostream>
using namespace std;
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(false);
	int number; // 반복 횟수
	cin >> number;
	int y = 0; // 영식이 요금
	int m = 0; // 민식이 요금
	
	// 통화시간 받아서 각 요금제 적용시 얼마인지 계산
	for (int i = 0; i < number; i++) {
		int tmp;
		cin >> tmp;

		y += (tmp / 30 + 1) * 10; // 30초마다 10원
		m += (tmp / 60 + 1) * 15; // 60초마다 15원
	}
	if (y > m) cout << "M " << m;
	else if (y < m) cout << "Y " << y;
	else cout << "Y M " << m;

	return 0;
}