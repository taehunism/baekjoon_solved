#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int T, R;
    string S;
    cin >> T;

    for (int i = 0; i<T; i++) {
        cin >> R >> S;

        int num[S.length()];
        for (int i=0; i<S.length(); i++) {
            for (int j = 0; j<R; j++) {
                cout << S[i];
            }
        }
        cout << "\n";
    }
    
    return 0;
}