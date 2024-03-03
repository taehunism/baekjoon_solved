#include <iostream>
//#include <vector>

using namespace std;

int main(void) {
    int A,B;
    //int count = 0;

    //vector<int> result(1000000);
    // 와일 쓸거며 그냥 돌리고, 종료 조건을 넣는게 좋을 지도.. break damm ~~
    while (1) {
        cin >> A >> B;
        //result[count] = A + B;
        //count++;
        if (A==0 && B==0) break; 

        cout << A+B << endl;
    }

    // for (int i = 0; i<count-1; i++) {
    //     cout << result[i] << endl;
    // }
    return 0;
}