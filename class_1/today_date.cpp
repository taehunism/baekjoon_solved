#include <iostream>
#include <ctime>
int main() {
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    std::cout << t->tm_year + 1900 << "-" << 1 + t->tm_mon  << "-" << t->tm_mday << std::endl;
    return 0;
}

