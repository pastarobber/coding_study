#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	bool find_num[30] = { 0, };

	for (int i = 1; i < 29; i++) {
		cin >> N;
		find_num[N - 1] = true; // 입력된 수 1로 초기화
	}

	for (int i = 0; i < 30; i++) {
		if (!find_num[i]) // 1이 아닐 때
			cout << i + 1 << endl;
	}
}
