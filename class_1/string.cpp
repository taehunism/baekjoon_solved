#include <iostream>
#include <cstring> // for strcpy

using namespace std;

int main(void) {
    char test[1000];
    int T;
    
    char temp[T][2];

    cin >> T;

    for (int i = 0; i<T; i++) {
        cin >> test;
        temp[i][0] = test[0];
        temp[i][1] = test[strlen(test) -1];
    }

    for (int i =0; i<T; i++) {
        cout << temp[i][0] << temp[i][1] << "\n";
    }

    return 0;
}