#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if (x == y&& y == z && x==z) {// 다 같은 경우
		cout << 1000*(10 + x);
	}
	else if(x!=y&&y!=z&&x!=z){// 다 다른 경우
		cout << max(z, max(x, y)) * 100;
	}
	else { // 두 개만 같을 경우
		int s = (x == y) ? x : z;
		cout << 100 * (10 + s);
	}
	
	return 0;
}