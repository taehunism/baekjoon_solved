#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string determine(int a, int b, int c);

string determine(int a, int b, int c) {
    string det;
    int length[3] = {a,b,c};
    sort(length, length+3);

    int a_ , b_, c_ = 0;
    a_ = length[0] * length[0];
    b_ = length[1] * length[1];
    c_ = length[2] * length[2];

    if (c_ == a_ + b_) {
        det = "right";
    }
    else {
        det = "wrong";
    }

    return det;
}

int main(void) {
    int n = 5000;
    int a=0, b=0, c=0;
    string det;

    for (int i = 0; i<n; i++) {
        cin >> a >> b >> c;
        if ( a == 0 && b == 0 && c ==0 ) {
            cin.ignore();
            break;
        }
        det = determine(a,b,c);

        cout << det << endl;
        }

    return 0;
}