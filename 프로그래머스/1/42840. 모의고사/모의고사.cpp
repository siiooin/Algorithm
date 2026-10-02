#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> ans;
    
    vector<int> first= {1,2,3,4,5};
    vector<int> second = {2,1,2,3,2,4,2,5};
    vector<int> third = {3,3,1,1,2,2,4,4,5,5};
    
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    
    
    for(int i=0; i < answers.size(); i++){
        if(first[i % 5] == answers[i]){
            c1++;
        }
        if(second[i % 8] == answers[i]){
            c2++;
        }
        if(third[i % 10] == answers[i]){
            c3++;
        }
    }
    
    int maxscore = max({c1,c2,c3});
    
    if(maxscore == c1){
        ans.push_back(1);
    }
    if(maxscore == c2){
        ans.push_back(2);
    }
    if(maxscore == c3){
        ans.push_back(3);
    }
    
    
    return ans;
}