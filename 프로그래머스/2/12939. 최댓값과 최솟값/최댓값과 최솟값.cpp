#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    string temp = "";
    
    for(int i=0;i < s.size(); i++){
        if(s[i] == ' ')
        {
            if(!temp.empty()){
                v.push_back(stoi(temp));
                temp ="";
            }
        }else{
            temp +=s[i];
        }
    }
    
   if (!temp.empty()) {
        v.push_back(stoi(temp));
    }
    
    sort(v.begin(), v.end());
    
    answer = to_string(v.front()) + " " + to_string(v.back());
    
    return answer;
}