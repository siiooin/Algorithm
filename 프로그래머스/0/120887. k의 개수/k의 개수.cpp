#include <iostream>
#include <string>
using namespace std;

int solution(int i, int j, int k) {
  int answer = 0;

  for (int n = i; n <= j; n++) {
    string s = to_string(n);

    for (int a = 0; a < s.length(); a++) {
      if (s[a] == k + '0') {
        answer++;
      }
    }
  }

  return answer;
}