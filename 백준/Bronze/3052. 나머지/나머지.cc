#include <iostream>
#include <set>

using namespace std;

int main() {
	int N;
	int cnt = 0;
	set<int> answer;
	for (int i = 0; i < 10; i++) {
		cin >> N;
		answer.insert(N % 42);
	}

	cout << answer.size();

	return 0;
}