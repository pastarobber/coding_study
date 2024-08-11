#include <iostream>

using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
    // 분이 45보다 작을 때
    if (m < 45) {
        m += 60; // 1시간의 분을 더해주고
        h--; // 시간을 1 감소
        if (h < 0) h = 23; // h가 0에서 감소하면 23으로 변경
    }

    // 최종 시간과 분 출력
    cout << h << " " << m - 45;

	return 0;
}