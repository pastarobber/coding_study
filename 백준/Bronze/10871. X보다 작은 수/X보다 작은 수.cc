#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, a, X;
	cin >> N >> X;
	vector<int> num;
	for(int i=0;i<N;i++) {
		cin >> a;
		num.push_back(a);
	}

	for (auto& s : num)
		if (s<X)
			cout << s << " ";

	return 0;
}