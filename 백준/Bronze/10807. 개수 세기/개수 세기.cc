#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, a, V;
	int cnt = 0;
	cin >> N;
	vector<int> num;
	for(int i=0;i<N;i++) {
		cin >> a;
		num.push_back(a);
	}
	cin >> V;

	for (auto& s : num)
		if (s == V)
			cnt++;
	cout << cnt;

	return 0;
}