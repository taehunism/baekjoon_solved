#include <iostream>
#include <vector>

using namespace std;

int main() { 
    int  T;
    cin >> T;
    vector<int> result(T);
    
    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;
        result[i] = A + B;
    }

    for (int j = 0; j < T; j++) {
        cout << result[j] << endl;
    }

    return 0;
    
}