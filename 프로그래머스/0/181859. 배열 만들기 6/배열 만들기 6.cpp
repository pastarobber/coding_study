#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i=0;
    while(i<arr.size()){
        if(stk.empty()){
            stk.push_back(arr[i]);
            i++;
        }
        else{ // stk에 원소가 있을 때
            if(stk.back()!=arr[i]){ // stk마지막 원소가 arr[i]와 다를 때
                stk.push_back(arr[i]);
                i++;
            }
            else{ // 같을 때
                stk.pop_back();
                i++;
            }
        }
    }if(stk.empty()) { // 다하고 비어있을 때
        stk.push_back(-1);
    }
    return stk;
}