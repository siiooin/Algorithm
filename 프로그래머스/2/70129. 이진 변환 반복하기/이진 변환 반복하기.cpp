#include <string>
#include <vector>

using namespace std;

string to_binary(int num) {
	string str = "";
	while (num > 0) {
		if (num % 2 == 1) str = "1" + str;
		else str = "0" + str;
		num >>= 1;
	}
	return str;
}

vector<int> solution(string s) {
    vector<int> answer;
    int count = 0;
    int cnt = 0;
    while(1){
        string buffer = "";

        for(int i=0; i < s.length(); i++){
            if(s[i] == '0'){
                cnt++;
                continue;
            }else{
                buffer += s[i];
            }
        }
        
        s = to_binary(buffer.length());
        count++;
        
        if(s == "1"){
            break;
        }
    }
    answer.push_back(count);
    answer.push_back(cnt);
    return answer;
}
