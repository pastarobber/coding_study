#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string str;
	vector<int> alpha(26, -1);

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		int offset = str.at(i) - 'a';
		if (alpha.at(offset) < 0)
			alpha[offset] = i;
	}

	for (auto& a : alpha)
		cout << a << " ";

	return 0;
}