#include <iostream>
#include <map>

using namespace std;

int main() {
	string str;
	int sum = 0;
	cin >> str;

	map<char, int> m = { {'A',3},{'B',3},{'C', 3 },{'D', 4 }, { 'E', 4 },{ 'F', 4 },
		{ 'G', 5 }, { 'H', 5 },{ 'I', 5 }, { 'J', 6 }, { 'K', 6 }, { 'L', 6 }, { 'M', 7 }, { 'N', 7 }, { 'O', 7 },
		{ 'P', 8 },{ 'Q', 8 },{ 'R', 8 }, { 'S', 8 }, { 'T', 9 }, { 'U', 9 },{ 'V', 9 }, { 'W', 10 },{ 'X', 10 },{ 'Y', 10 }, { 'Z', 10 } 
	};
	for (const auto& s : str)
		sum += m[s];
	
	cout << sum;

	return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

int main() {

	int time[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

	string s;
	int sum = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		sum += time[s[i] - 'A'];
	}
	
	cout << sum;
	

	return 0;
}
