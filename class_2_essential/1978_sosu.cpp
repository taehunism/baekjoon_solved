#include <iostream>
using namespace std;

int find(int in_[], int n);

int find(int in_[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= in_[i]; j++) {
            if (j == 1) {
                continue;
            }

            if (in_[i] % j == 0 && j < in_[i]) {
                break;                
            } 
            
            if (in_[i] % j == 0 && j == in_[i]) {
                cnt++;
            }
            
        }
    }
    return cnt;
}

int main(void) {
    int n = 0;
    int cnt = 0;
    cin >> n;
    int in_[n];
    // for (int i = 0; i<n; i++) {
    //     in_[i] = 0;
    // }

    for (int i = 0; i<n; i++) {
        cin >> in_[i];
    } 
    cnt = find(in_, n);


    cout << cnt << endl;

    return 0;
}