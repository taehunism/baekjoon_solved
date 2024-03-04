#include <iostream>

using namespace std;

int main(void) {
    int N;
    cin >> N;

    char star[N];

    for (int i = 0; i < N; i++) {
        // 공백 채우기
        for (int j = 0; j < N - 1 - i; j++) {
            star[j] = ' ';
        }

        // '*' 채우기
        for (int j = N - 1 - i; j < N; j++) {
            star[j] = '*';
        }

        // 배열 출력
        for (int j = 0; j < N; j++) {
            cout << star[j];
        }

        // 줄 바꿈
        cout << endl;
    }

    return 0;
}
