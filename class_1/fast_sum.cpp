/*
C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자. 단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
*/

#include <iostream>

using namespace std;


int main(void) {
    int A,B,T;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;

        cout << A+B << "\n";
    }

    return 0;

}