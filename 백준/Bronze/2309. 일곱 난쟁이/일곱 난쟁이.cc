#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	vector<int> dwarfs; // 난쟁이 키 넣을 벡터(나중에 오름차순 출력)
	dwarfs.resize(9); // 9명의 키가 제공
	int sum = 0; // 키 합 계산용
	int minus; // 100과의 차이 값(두 가짜 난쟁이의 합)
	vector<int> temp;

	for (int i = 0; i < 9; i++) {
		int tmp;
		cin >> tmp;
		dwarfs[i] = tmp; // 난쟁이 값 무조건 받아서 넣고
		sum += tmp; // 합도 계산해봄
	}
	minus = sum - 100; // 100합인 것 외의 값은 가짜 난쟁이 두 개의 합
	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			if (dwarfs[i] + dwarfs[j] == minus) { // 그 두 난쟁이 합이 100과의 차이라면
				temp.push_back(dwarfs[i]); temp.push_back(dwarfs[j]);
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		dwarfs.erase(remove(dwarfs.begin(), dwarfs.end(), temp[0]), dwarfs.end());
		dwarfs.erase(remove(dwarfs.begin(), dwarfs.end(), temp[1]), dwarfs.end());
	}
	// 오름차순 소팅 후 출력
	sort(dwarfs.begin(), dwarfs.end());
	for (auto&i : dwarfs) cout << i << "\n";

	return 0;
}