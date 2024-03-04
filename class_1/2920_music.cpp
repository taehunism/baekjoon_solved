#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int cnt = 0;
    int N[8];

    for (int i=0; i<8; i++ ) {
        cin >> N[i];
        if(i!=0) {
            if (N[i] - N[i-1] == 1) {
                cnt++;
            }
            else if (N[i] - N[i-1] == -1) {
                cnt--;
            }
        }
    }

    if(cnt == 7) {
        cout << "ascending" << "\n";
    }
    else if (cnt == -7) {
        cout << "descending" << "\n";
    }
    
    
    else if (cnt != 8 & cnt != -8) cout << "mixed" << "\n";


    return 0;
}