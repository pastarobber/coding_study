#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    int max = sides[0]+sides[1] - 1;
    int min = abs(sides[0]-sides[1]) + 1;
    return max - min + 1;
}
