#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MAX_WORDS = 5;
    vector<string> words(MAX_WORDS);

    // 단어 입력받기
    for (int i = 0; i < MAX_WORDS; ++i) {
        cin >> words[i];
    }

    // 세로로 읽은 글자들을 저장할 문자열
    string result = "";

    // 입력받은 단어들 중 가장 긴 단어의 길이 추적
    int maxLength = 0;
    for (int i = 0; i < MAX_WORDS; ++i) {
        if (words[i].length() > maxLength) {
            maxLength = words[i].length();
        }
    }

    // 최대 길이(maxLength)만큼 반복하여 세로로 글자를 읽음
    for (int i = 0; i < maxLength; ++i) {
        for (int j = 0; j < MAX_WORDS; ++j) {
            // 현재 단어의 길이가 i보다 크면 해당 위치의 글자 추가
            if (i < words[j].length()) {
                result += words[j][i];
            }
        }
    }
    cout << result << endl;

    return 0;
}