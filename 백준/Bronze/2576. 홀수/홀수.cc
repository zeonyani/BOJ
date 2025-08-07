#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0); // 코테 속도 빠르게
	int tmp; // 숫자 받는 임시 변수
	int min = 0x3f3f3f3f; // 최소값 저장용(엄청 큰 값으로)
	int sum = 0; // 홀수 합
	
	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		if (tmp & 1) {
			sum += tmp;
			if (tmp < min) min = tmp;
		}
	}
	if (sum == 0) cout << "-1";
	else cout << sum << "\n" << min;
	return 0;
}