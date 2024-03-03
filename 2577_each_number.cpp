#include <iostream>

using namespace std;

int main(void) {
    int A,B,C;
    int mul;
    int num[10] = {0};
    string str;

    cin >> A;
    cin >> B;
    cin >> C;

    // line 1 - each 0 print
    // line 2~9 - 1 ~ 9 
    mul = A * B * C;
    for(int i = 0; i<10; i++) {
        num[mul % 10]++;
        mul /= 10;
        if (mul == 0) break;
    }

    for (int i = 0; i<10; i++) cout << num[i] << "\n";
    return 0;

}