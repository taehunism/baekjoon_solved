#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v(10,2);
    // int 형을 넣었으니 
    vector < vector <int>> v2(10,vector<int>(10,10));
    v2.push_back(v);
    // 여기는 vector <int> 형을 넣음
    for (int i = 0; i<10; i++) {
        cout << v2[i][0] << "\n"; 
        cout << v[i] << "\n";
        cout << v2[i][i+9] << endl;
   }
   
    return 0;
}