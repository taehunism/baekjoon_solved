#include <iostream>

int main(void) {
    int A, B = 0;
    std::cin >> A;
    std::cin >> B;

    if (A > 0 && B > 0) {
        std::cout << "1" << std::endl;
    }
    
    else if (A < 0 && B > 0) {
        std::cout << "2" << std::endl;
    }
    else if (A < 0 && B < 0) {
        std::cout << "3" << std::endl;
    }
    else {
        std::cout << "4" << std::endl;
    }

    return 0;
}