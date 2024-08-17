#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M, i, j;
	cin >> N >> M; // 상자 개수
	vector<int> box;

	for (int i = 1; i <= N; i++) {
		box.push_back(i);
	}
	for (int x = 0; x < M; x++) {
		cin >> i >> j;
		reverse(box.begin() + i - 1, box.begin() + j);
	}
	for (auto& s : box) {
		cout << s << " ";
	}
	return 0;
}