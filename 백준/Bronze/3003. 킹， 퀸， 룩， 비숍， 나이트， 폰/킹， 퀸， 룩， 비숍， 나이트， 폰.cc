#include <iostream>

using namespace std;

int main() {
	int n;
	int x[6] = { 1,1,2,2,2,8 };
	int y[6] = {};
	int z[6] = {};

	// 배열에 입력 값 넣기
	for (int i = 0; i < 6; i++) {
		cin >> n;
		y[i] += n;
	}

	for (int i = 0; i < 6; i++) {
		if (x[i] != y[i]) 
			z[i] += x[i] - y[i];
	}

	for (int& s : z) 
		cout << s << " ";

	return 0;
}