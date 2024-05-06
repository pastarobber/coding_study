#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer; 
    vector<int> v;
    
    for(int i=1;i<=n;i++){
        if(n%i==0)
            answer.push_back(n/i);  // 약수
    }
    for(auto i : answer){
        int cnt=0;
        for(int x=1;x<=i;x++){
            if(i%x==0){
                cnt++;
            }
        }
        if(cnt==2){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
    }

    return v;
}