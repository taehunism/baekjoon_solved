#include <iostream>

using namespace std;

int main(void) {
    int N, i=0;
    int factorial = 1;
    cin >> N;

    for (i=1;i<=N;i++) {
        factorial *= i;
    }
    cout << factorial << endl;

    return 0;
}