#include <iostream>
using namespace std;
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(false);

	int n1, n2;
	cin >> n1 >> n2;

	// 값이 같은 경우 0 만 출력
	if (n1 == n2) {
		cout << 0;
	}
	// 후자가 더 작으면 교체
	else  if (n1 > n2) {
		int tmp;
		tmp = n1;
		n1 = n2;
		n2 = tmp;

		cout << n2 - n1 - 1 << "\n";
		for (int i = n2 - n1 - 1; i > 0; i--) {
			cout << n2 - i << " ";
		}
	}
	else {
		cout << n2 - n1 - 1 << "\n";
		for (int i = n2 - n1 - 1; i > 0; i--) {
			cout << n2 - i << " ";
		}
	}
}