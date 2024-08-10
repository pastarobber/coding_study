#include <iostream>

using namespace std;

int main() {
	//간단한 규칙 찾기
	int n;
	cin >> n;
	int total = 2 * n - 1;
	for (int i = 0; i < total; i++) {
		int space_cnt = i < n ? n - (i + 1) : i - n + 1;//공백 개수
		//i(현재 행)이 n(입력한 수)보다 작으면, n(입력한 수) - i(현재 행) + 1
		//n보다 크면, i(현재 행) - n(사용자가 입력한 수) + 1
		int star_cnt = i < n ? 2 * i + 1 : total - 2 * space_cnt;//별 개수
		//i(현재 행)이 n(입력한 수)보다 작으면, 2 * i(현재 행) + 1
		//n(입력한 수)보다 작으면, total(총 행의 수 - 2 * 공백 개수)
		for (int i = 0; i < space_cnt; i++)//공백 출력
			cout << " ";
		for (int i = 0; i < star_cnt; i++)//별 출력
			cout << "*";
		cout << "\n";
	}
	return 0;
}