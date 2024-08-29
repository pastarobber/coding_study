#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int newSize = max(arr.size(),arr[0].size());
    // 바깥쪽 벡터의 크기를 newSize로 변경
    arr.resize(newSize);
    // 안쪽 각 벡터의 크기도 newSize로 맞추기
    for (int i = 0; i < newSize; i++) {
        arr[i].resize(newSize);
    }
    return arr;
}