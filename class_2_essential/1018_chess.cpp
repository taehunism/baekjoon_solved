#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int BW_CNT(int x, int y);
int WB_CNT(int x, int y);

string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

string board[50];

int BW_CNT(int x, int y) {
    int cnt=0;
    for(int i = 0; i<8; i++) {
        for(int j = 0; j<8; j++) {
            if(board[x+i][y+j] != BW[i][j]) cnt++;
        }
    }
    return cnt;
}

int WB_CNT(int x, int y) {
    int cnt=0;
    for(int i = 0; i<8; i++) {
        for(int j = 0; j<8; j++) {
            if(board[x+i][y+j] != WB[i][j]) cnt++;
        }
    }
    return cnt;
}


int main(void) {
    int m, n;
    int min_val = 2500; // 최대값으로 초기화

    // input
    pair<int, int> myPair;
    cin >> myPair.first >> myPair.second; // chess board size width , height
    for (int i = 0; i < myPair.first; i++) cin >> board[i];

    m = myPair.first;
    n = myPair.second;

    // processing
    for (int i = 0; i <= m - 8; i++) {
        for (int j = 0; j <= n - 8; j++) {
            int tmp = min(BW_CNT(i,j), WB_CNT(i,j));
            if (min_val > tmp) {
                min_val = tmp;
            }
        } 
    }
    cout << min_val;

    return 0;
}
