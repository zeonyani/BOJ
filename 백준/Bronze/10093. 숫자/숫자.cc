#include <iostream>
#include <algorithm> // swap 사용을 위함
using namespace std;
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(false);

	long long n1, n2; // 조건2 충족을 위함
	cin >> n1 >> n2;

	if (n1 == n2) {
		cout << "0" << "\n";
	}
	else {
		// 전자가 더 크면 교체
		if (n1 > n2) {
			swap(n1, n2);
		}
		cout << n2 - n1 - 1 << "\n"; // 사이 정수 개수 출력
		for (long long i = n1 + 1; i < n2; i++) cout << i << " "; // 그 정수 자체 출력
	}
	return 0;
}