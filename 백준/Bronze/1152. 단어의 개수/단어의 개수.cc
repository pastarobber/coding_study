#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	string str;
	int cnt = 0;
	getline(cin, str);
	stringstream ss(str);
	while (ss>>str) { cnt++;}
	cout << cnt;

	return 0;
}