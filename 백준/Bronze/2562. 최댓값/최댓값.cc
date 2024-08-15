#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, a;
	vector<int> num;
	for(int i=0;i<9;i++) {
		cin >> N;
		num.push_back(N);
	}
	
	int max = 0;
	for (int i = 0; i < num.size(); i++) {
		if (max < num[i]) {
			max = num[i];
			a = i;
		}
	}
	cout << max << "\n" << a+1;

	return 0;
}