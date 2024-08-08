#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    string token;
    while (ss >> token) {
        // Handle negative and positive signs
        if (token == "-" || token == "+") {
            string nextToken;
            if (ss >> nextToken) {
                if (token == "-") {
                    answer -= stoi(nextToken);
                } else {
                    answer += stoi(nextToken);
                }
            }
        } else {
            answer += stoi(token);
        }
    }
    return answer;
}