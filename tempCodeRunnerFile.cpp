#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N, num, find_value;
    int count=0;
    vector<int> numbers;

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> num;
        numbers.push_back(num);
    }
    cin >> find_value;

    for (int element : numbers) {
        if (element == find_value) {
            count++;
        }
    }
    cout << count;

    return 0;
}