#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N, X;
	vector<int> A;
	cin >> N >> X;
	A.resize(N);

	for (auto& n : A) {
		cin >> n;
	}

	for (auto& n : A) {
		if (n < X) cout << n << " ";
		else continue;
	}

	return 0;
}