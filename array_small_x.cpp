#include <iostream>

using namespace std;

int main(void) {
    int N, X;
    cin >> N >> X;
    
    int* A = new int[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];

        if (A[i] < X) cout << A[i] << " "; 
     }

    delete[] A;
    return 0;
}