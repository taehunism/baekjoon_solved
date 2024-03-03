#include <iostream>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    int input[N];


    for(int i=0; i<N; i++) {
        cin >> input[i];
    }

    int max = input[0];
    int min = input[0];

    for (int i=1; i<N; i++) {
        if (max < input[i]) max = input[i];
        if (min > input[i]) min = input[i];
    }

    cout << min << " " << max << "\n";
    
    return 0;
}