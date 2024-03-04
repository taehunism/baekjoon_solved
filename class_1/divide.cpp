#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A=0.0;
    double B=0.0;

    cin >> A >> B;
    double result = (double)A / (double)B;
    cout << fixed << setprecision(9) << result << endl;

    return 0;
}
