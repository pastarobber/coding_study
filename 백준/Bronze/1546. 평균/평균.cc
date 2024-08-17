#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, score;
	cin >> N;
	vector<int> answer;
	float max = 0;
	float sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> score;
		if (max < score)
			max = score;
		answer.push_back(score);
	}

	for (auto& s : answer) {
		sum += (s * 100 / max);
	}
	cout << sum/N;

	return 0;
}