#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string str;
    str = to_string(n);
    
    for(int i =0;i < str.size(); i++){
        char c = str[i] - '0';
        answer += (int)c;
    }

    return answer;
}