#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    answer += n * 12000;
    answer += k * 2000;
    
    while(1){
        if(n >=10){
         answer -= 2000;
         n -= 10;
        }else{
            break;
        }
    }
    return answer;
}