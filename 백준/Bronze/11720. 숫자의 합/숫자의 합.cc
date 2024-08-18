#include <iostream>

using namespace std;

int main() {
	int N;
	string n;
	int sum = 0;
	cin >> N >> n;
	
	for (int i = 0; i < N; i++) {
		sum += (n[i] - '0'); // 각 자리의 합
	}
	cout << sum;
	
	return 0;
}