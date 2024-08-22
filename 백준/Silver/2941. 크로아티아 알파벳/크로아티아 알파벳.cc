#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	string a[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		size_t pos = 0;
		while ((pos = str.find(a[i], pos)) != string::npos) {
			cnt++; // 공백 문자 개수
			str.replace(pos, a[i].length(), " ");
		}
	}
	for (auto c : str)
		if (c != ' ') // 공백이 아닌 문자 개수
			cnt++;

	cout << cnt;

	return 0;
}