#include <iostream>

using namespace std;

int main(void) {
    int number;
    bool b[31] = {false};
    int cnt=0;
    
    for (int i=0; i<28 ;i++) {
        cin >> number;
        b[number] = true;
    }
    
    for(int i=1;i<=30;i++) {
        if(b[i]==false) {
            cout << i << endl;
            cnt++;
        }
        if(cnt==2) break;
    }

    return 0;
}