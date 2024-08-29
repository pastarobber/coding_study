#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int i;
    vector<vector<int>> arr(N, vector<int>(M));  // N x M 크기의 2차원 벡터를 초기화

    for (int q = 0; q < 2; q++) {
        for (int x = 0; x < N; x++) {
            for (int y = 0; y < M; y++) {
                cin >> i;
                arr[x][y] += i;
            }
        }
    }

    for (int x = 0; x < N; x++) {
        for (int y = 0; y < M; y++) {
            cout << arr[x][y] << " ";
        }
        cout << "\n";
    }
    return 0;
}