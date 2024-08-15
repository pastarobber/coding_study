#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M, i, j, k;
	cin >> N >> M;
	int T = (N != M) ? M : N;
	vector<int> box(N, 0); // 크기 N 전부 0으로 초기화

	for (int x = 0; x < T; x++) {
		cin >> i >> j >> k;
		for (int y = i - 1; y < j; y++) {
			box[y] = k;
			box[y] = k;
		}
	}

	for (auto& s : box) {
		cout << s << " ";
	}

	return 0;
}