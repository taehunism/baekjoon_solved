#include <iostream>

using namespace std;

int main(void) {
    int T, H, W, N;

    cin >> T;

    int floor, room, k;

    for (int i = 0 ; i<T; i++) {
        cin >> H >> W >> N;
        floor = 0; room = 0;
        
        floor = N % H;
        
        if (N%H == 0) {
            floor = H;
            room = N / H;
        }
        else if (N%H != 0) {
            room = (N / H) + 1;
        }
        
        if (room < 10) cout << floor << "0" << room << "\n";
        else cout << floor << room << "\n";
        }

    return 0;
}