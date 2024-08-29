#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i,row,col;
    int max = 0;
   
    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {
            cin >> i;
            if (i >= max) {
                max = i;
                row = x + 1;
                col = y + 1;
            }
        }
    }
    cout << max << "\n" << row << " " << col;
  
    return 0;
}

