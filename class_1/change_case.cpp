#include <iostream>

using namespace std;
int main(void) {
    char word[101];

    cin >> word;


    for(int i=0; i<101; i++) {
        if(word[i] == '\0') break;
        
        if (isupper(word[i])) {
            word[i] = tolower(word[i]);
        }
        else word[i] = toupper(word[i]);
    }

    cout << word << "\n";
    return 0;
}