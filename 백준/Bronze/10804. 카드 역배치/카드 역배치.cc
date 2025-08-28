#include <iostream>
#include <vector>
#include <algorithm> // reverse 사용
using namespace std;
int main(void)
{
	vector<int> nums;
	int a, b;
	
	// 1~20 까지 벡터에 넣음
	for (int i = 0; i < 20; i++) {
		nums.push_back(i + 1); // 사이즈 안정했으니 푸쉬백 문법
	}
	
	// 10번 반복 + 리버스
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		reverse(nums.begin() + a - 1, nums.begin() + b);
		// 예를 들어 5, 10 이면 실제로는 0부터 인덱스가 적용되니까 4라고 해야 하고
		// reverse 함수 문법 상 맨 마지막은 포함이 안되어서 그냥 b로 해도 ㄱㅊ
	}

	// 출력
	for (auto &a : nums) cout << a << " ";
	return 0;
}