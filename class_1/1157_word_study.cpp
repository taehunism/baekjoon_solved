#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    string input = "";
    getline(cin, input);

    int in_len = input.length();
    int num[26] = {0};
    int max = 0;
    int index = 0; 
    int cnt = 0;

    for (int i = 0; i < in_len; i++) {
        input[i] = toupper(input[i]); // uppercase transform
        num[input[i]-65]++; 
    }

    for (int i = 0; i<26; i++) {
        if (max < num[i]) {
            max = num[i];
            index = i;
        }
    }

    for (int i = 0; i<26; i++) {
        if(max==num[i]) cnt++;
    }

    if (cnt>1) cout << "?";
    else cout << (char)(index+65);

    return 0;
}