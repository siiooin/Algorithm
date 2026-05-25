#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    vector<int> arr;

    // 각 자리수 분리
    while(n > 0) {
        arr.push_back(n % 10);
        n /= 10;
    }

    // 내림차순 정렬
    sort(arr.begin(), arr.end(), greater<int>());

    long long answer = 0;

    // 다시 숫자로 만들기
    for(int num : arr) {
        answer = answer * 10 + num;
    }

    return answer;
}