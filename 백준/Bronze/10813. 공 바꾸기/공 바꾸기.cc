#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N = 5, M = 5, i, j;
	cin >> N >> M;
	vector<int> box;

	for (int x = 1; x <= N; x++) {
		box.push_back(x); // 같은 번호 1개씩 들어있음
	}

	for (int x = 0; x < M; x++) {
		cin >> i >> j;
		swap(box[i-1], box[j-1]);
	}

	for (auto& s : box) {
		cout << s << " ";
	}

	return 0;
}