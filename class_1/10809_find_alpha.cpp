#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    int alpha[26];
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    for (int i=0; i<26; i++) {
        alpha[i] = -1;
    }

    std::cin >> s;

    for (int i = 0; i<s.length(); i++) {
        if(alpha[int(s[i] - 97)] == -1) {
            alpha[int(s[i] - 97)] = i;
        } 
    }
    
    for (int i = 0; i<26; i++) {
        cout << alpha[i] << " ";
    }

    return 0;
}