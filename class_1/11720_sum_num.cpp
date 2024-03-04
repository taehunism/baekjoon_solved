#include <iostream>
#include <string>

using namespace std;

int main() {
    int N = 0;
    int sum_numbers = 0;
    string M = "";

    cin >> N;
    
    /*if (N<=1 || N>=100) {
        //cout << "N의 범위는 0과 100사이로 입력해주세요";
        cin >> N;
    }*/

    cin >> M;

    for (char ch : M) {
        if (isdigit(ch)) {
            int digit = ch - '0';
            sum_numbers += digit;
        }
    }

    cout << sum_numbers << endl;

    return 0;
}