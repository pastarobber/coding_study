#include <iostream>

using namespace std;

int main() {
	int n, a, b;
	cin >> n;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}