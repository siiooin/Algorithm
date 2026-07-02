#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1; i<=n;i++){
        int count = 0;
        count += i;
        if(count == n ){
                answer++;
                break;
            }
        for(int j =i+1; j <=n; j++){
            count += j;
            if(count > n)
                break;
            
            if(count == n ){
                answer++;
                count = 0;
                break;
            }
        }
    }

    return answer;
}