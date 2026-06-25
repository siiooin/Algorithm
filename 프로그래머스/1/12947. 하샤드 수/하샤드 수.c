#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    
    int num = 0;
    int n = x;
    
    while(n >= 10){
        num += n % 10;
        n /= 10;
    }
    
    num += n;
    
    if(x % num == 0){
        answer = true;
    }else
        answer = false;
    
    return answer;
}