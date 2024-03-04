#include <iostream>

using namespace std;

void alarm(int H, int M);
    
void alarm(int H, int M) {
    int hour = H;
    int minute = M;

    minute -= 45;
    if (minute < 0) {
        minute = 60 + minute;
        hour--; 
    }
    
    if (hour < 0) {
        hour = 24 + hour;
    }
    cout << hour << " " << minute << "\n";
}

int main() {
    
    int H, M;
    int hour, minute;

    cin >> H >> M;
    alarm(H,M);

    return 0;
}