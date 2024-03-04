#include <iostream>
//#include <string>

using namespace std;

int main(void) {
    //string word = "";
    char word[101]; // 0~100 인데, 마지막이 \0 라서 0~99 라고 하면 100글자.
    int cnt=0;
    cin >> word;

    for (int i=0;i<100;i++) {
        if (word[i] != '\0') {
            cnt++;
        } else break;
    } 
    cout << cnt << "\n";
    return 0;
}

// '\0' 는 널 문자임.. char 마지막에 저장되는 친구 !! 
// 이 녀석을 만나면 문자열의 끝에 도달 했다는 뜻이 됨! 