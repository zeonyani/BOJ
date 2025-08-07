#include <iostream>
using namespace std;
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0); // cin, cout 코테문제 시간 단축용

	int tmp; // 윷 입력받는 임시 변수
	int cnt = 0; // 1의 개수를 세는 변수
	for (int i = 0; i < 3; i++) { // 총 3번 입력받음
		for (int j = 0; j < 4; j++) { // 4개 자료 입력 받음(윷 정보)
			cin >> tmp;
			if (tmp == 1) cnt++;
		}
		switch (cnt) { // endl보다 개행문자가 더 빠름
		case 4: cout << "E" << "\n"; break;
		case 3: cout << "A" << "\n"; break;
		case 2: cout << "B" << "\n"; break;
		case 1: cout << "C" << "\n"; break;
		case 0: cout << "D" << "\n"; break;
		}
		cnt = 0; // cnt 0으로 초기화
	}
	return 0;
}