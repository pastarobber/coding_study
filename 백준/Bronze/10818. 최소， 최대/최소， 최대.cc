#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, a;
	cin >> N;
	vector<int> num;
	for(int i=0;i<N;i++) {
		cin >> a;
		num.push_back(a);
	}

	sort(num.begin(), num.end());
	cout << num.front() << " " << num.back();

	return 0;
}