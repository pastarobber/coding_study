#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
     vector<int> answer;
    set<int> unique_elements;

    for (int i = 0; i < arr.size(); i++) {
        if (unique_elements.find(arr[i]) == unique_elements.end()) { // arr[i]가 answer에 없으면
            unique_elements.insert(arr[i]);
            answer.push_back(arr[i]);
        }
        if (answer.size() == k) break;
    }

    // answer의 크기가 k보다 작다면, 남은 부분을 -1로 채운다.
    while (answer.size() < k) {
        answer.push_back(-1);
    }
    return answer;
}