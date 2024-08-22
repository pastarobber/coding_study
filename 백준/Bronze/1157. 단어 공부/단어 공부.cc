#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main() {
	string str;
	cin >> str;
	vector<int> alphabet_cnt(26, 0);

	// 대문자로 변환
	for(auto& ch : str)
		ch =toupper(ch);

	for (char ch : str) {
		int index = ch - 'A';
		alphabet_cnt[index]++;
	}
;
	int max = 0;
	char most_frequent_char = '?';
	bool is_duplicate = false;

	for (int i = 0; i < alphabet_cnt.size(); i++) {
		if (max < alphabet_cnt[i]) {
			max = alphabet_cnt[i];
			most_frequent_char = 'A' + i;
			is_duplicate = false; // 새로운 최대값이 발견되면 중복이 아니라고 설정
		}
		else if (alphabet_cnt[i] == max && max > 0) {
			is_duplicate = true; // 동일한 최대값이 존재하면 중복 플래그 설정
		}
	}

	// 중복된 최대값이 있는 경우 "?" 출력, 그렇지 않으면 가장 많이 등장한 알파벳 출력
	if (is_duplicate) {
		cout << "?" << endl;
	}
	else {
		cout << most_frequent_char << endl;
	}

	return 0;
}