#include <iostream>

using namespace std;

int main() {
	int year;
	cin >> year;
	if ((year%4==0) && (year % 100 != 0))  // 윤년 4의 배수, 100의 배수 아닐 때 또는 400의 배수일 때
		cout << 1;
	else if((year % 4 == 0)&& (year % 400 == 0))
		cout << 1;
	else
		cout << 0;
	return 0;
}