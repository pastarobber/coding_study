#include <iostream>
#include <string>

using namespace std;

int main() {

	int T, N;
	string str;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> str;
		for (int i = 0; i < str.size(); i++) {
			for (int x = 0; x < N; x++) {
				cout << str[i];
			}
		}
		cout << '\n';
	}
	return 0;
}