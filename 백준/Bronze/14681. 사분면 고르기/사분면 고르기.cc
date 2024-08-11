#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x > 0) // x 양수
		if (y > 0) // y 양수
			cout << 1;
		else
			cout << 4;
	if (x < 0) // x 음수
		if (y > 0) // y 양수
			cout << 2;
		else
			cout << 3;
	return 0;
}