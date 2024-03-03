#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string input = "";
    
    int cnt = 1;

    // getline은 공백을 포함한 문자열 받는거
    // .lengt는 파이썬 len() 같이 문자열 길이 뽑는거 
    getline(cin, input);
    for (int i = 0; i<input.length(); i++) {
        if(input[i] == ' ') cnt++;
    }
    if(input[0] == ' ') cnt--;
    if(input[input.length()-1] == ' ') cnt--;

    cout << cnt;
    return 0;
}