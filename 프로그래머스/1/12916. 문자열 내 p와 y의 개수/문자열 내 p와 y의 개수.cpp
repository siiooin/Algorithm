#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count1=0;
    int count2=0;
    
    for(int i=0; i < s.length(); i++){
        if(s[i] == 'P' || s[i] =='p')
        {
            count1++;
        }else if(s[i] == 'Y' || s[i] =='y'){
            count2++;
        }
    }
    cout <<count1 << count2;
    
    if(count1 == count2){
        return true;
    }
    else{
        return false;
    }
}