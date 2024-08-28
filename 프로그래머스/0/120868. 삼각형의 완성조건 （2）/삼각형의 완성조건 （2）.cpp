#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    // int answer = 0;
    // int end=0;
    // if(sides[0] < sides[1]){ // 2번째 숫자가 더 큰 경우
    //     for(int i=1;i<sides[1]+1;i++){
    //         if(sides[1]<sides[0]+i){
    //             answer++;
    //             end = i;
    //         }
    //     }
    //     for(int i = end + 1; i< 10; i++){ // 나머지 한 변이 더 긴 경우
    //         if(sides[0] + sides[1] > i){
    //             answer++;
    //             cout << i << " ";
    //         }
    //     }
    // }else{ // 1번째 숫자가 더 큰 경우
    //      for(int i=1;i<sides[1]+1;i++){
    //         if(sides[1]<sides[0]+i){
    //             answer++;
    //             cout << i << " ";
    //         }
    //     }
    // }
    // return answer;
    int max = sides[0]+sides[1] - 1;
    int min = abs(sides[0]-sides[1]) + 1;
    return max - min + 1;
}