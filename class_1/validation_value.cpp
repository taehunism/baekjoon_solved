#include <iostream>

using namespace std;

int validation(int A[]);

int validation(int A[]) {
    int valid = 0;
    for (int i = 0; i<5; i++) valid+=A[i]*A[i];
    
    return valid % 10;
}
int main(void) {
    int identity_numbers[5];
    int valid_value;
    for (int i = 0; i<5; i++) cin >> identity_numbers[i];

    valid_value = validation(identity_numbers);
   
    cout << valid_value << "\n";

    return 0;
}

