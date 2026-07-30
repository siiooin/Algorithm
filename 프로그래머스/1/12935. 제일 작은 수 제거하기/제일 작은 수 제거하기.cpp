#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    
    if(arr.size() <= 1){
        return {-1};
    }
    
    for(int i=0; i < arr.size(); i++){
        if(arr[i] <= min){
            min = arr[i];
        }
    }
    
    for(int i=0; i < arr.size(); i++){
        if(arr[i] != min){
            answer.push_back(arr[i]);
        }
    }
   
    return answer;
}