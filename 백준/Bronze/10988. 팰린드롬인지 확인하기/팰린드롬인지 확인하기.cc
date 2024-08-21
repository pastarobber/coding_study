#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	string str1, str2;
	int ans=0;

	if ((str.size() % 2)==0) { // 길이가 짝수일 때
		for (int i = 0; i < str.size() / 2; i++) {
			str1 += str[i];
		}
		for (int i = str.size() / 2; i < str.size(); i++) {
			str2 += str[i];
		}
		reverse(str2.begin(), str2.end());
		if (str1 == str2)
			ans = 1;
	}else { // 길이가 홀수일 때
		for (int i = 0; i < str.size() / 2; i++) {
			str1 += str[i];
		}
		for (int i = str.size() / 2+1; i < str.size(); i++) {
			str2 += str[i];
		}
		reverse(str2.begin(), str2.end());
		if (str1 == str2)
			ans = 1;
	}
	cout << ans;

	return 0;
}