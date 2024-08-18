#include <iostream>

using namespace std;

int main() {
	string S;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> S;
		cout << S.front() << S.back() << "\n";
	}

	return 0;
}