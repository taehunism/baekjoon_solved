#include <iostream>

using namespace std;

long long strange_calc(const long long A, const long long B);

long long strange_calc(const long long A, const long long B) {
    return A*A - B*B;
}

int main(void) {
    long long A, B;
    cin >> A >> B;
    
    long long result = strange_calc(A, B);

    cout << result << "\n";

    return 0;
}
