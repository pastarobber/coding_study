#include <iostream>

using namespace std;

int main() {
	int X, N, a, b;
	int sum = 0;
	cin >> X >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		sum += (a * b);
	}
	string answer = (X != sum) ? "No" : "Yes";
	cout << answer;

	return 0;
}