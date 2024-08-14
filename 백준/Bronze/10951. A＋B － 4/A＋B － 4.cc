#include <iostream>

using namespace std;

int main() {
	int A, B;
	while (1) {
		cin >> A >> B;
		if (!cin.eof()) {
			cout << A + B << "\n";
		}else break;
	}
	return 0;
}