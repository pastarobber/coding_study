#include <iostream>
#include <string>

using namespace std;
int main() {
	string N;
	cin >> N;

	for (char x = 'a'; x <= 'z'; x++) {
		int p = -1;
		for (char i = 0; N[i]; i++) {
			if (N[i] == x) {
				p = i;
				break;
			}
		}
		cout << p << " ";
	}
	return 0;
}