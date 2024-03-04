#include <iostream>

using namespace std;

int main(void) {
    int N; 
    
    //sync 안함
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int big = 1000000;
    int small = -1000000;

    cin >> N;
    int value[N];

    for(int i = 0; i<N; i++) {
        cin >> value[i];
    }

    int tmp;

    for (int i = 0; i<N-1; i++) {
        for (int j = i + 1; j<N; j++) {
            if (value[i] > value[j]) {
                tmp = value[j];
                value[j] = value[i];
                value[i] = tmp;
            } 
        }
    }
    //for (int i = 0; i<N; i++) 
    //  cout << value[i] << " " << "\n";
    cout << value[N-1] << " " << value[0] << "\n";
     return 0;
}
