#include <iostream>

using namespace std;

int main() {
	int h, B, C, m;
	int cnt = 0;
	cin >> h >> B >> C;
	if ((B + C) >= 60) {
		cnt = (B + C) / 60;
		m = (B + C) % 60;
		h += cnt;
	}
	else {
		m = B + C;
	}
	if (h > 23)
		h -= 24;
	cout << h << " " << m;

	return 0;
}