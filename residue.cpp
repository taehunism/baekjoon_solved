#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int A;
    vector<int> B;
    int cnt=0;
    for(int i=0;i<10;i++) 
    {
        cin>>A;
        B.push_back(A%42);
    }
    sort(B.begin(), B.end());
    B.erase(unique(B.begin(),B.end()),B.end());

    for(int i =0; i<B.size();i++) {
        //cout << B[i] << endl;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
