#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
		
	while (1) {
		getline(cin, str);
		if (str == "") { // 입력이 비어있으면 멈춤
			break;
		}
		else { //  입력이 있으면 출력
			cout << str << endl;
		}
	}
	return 0;
}