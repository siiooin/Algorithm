#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    string str;
    
    for(int i = 0; i < phone_number.size(); i++){
        if(phone_number.size() - i <= 4){
            str[i] = phone_number[i];
        }else
            str[i] = '*';
        
        answer += str[i];
    }
    
    
    return answer;
}