#include<iostream>
#include<string>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    string s;
    int score;
    int next;

    for (int i=0;i<N;i++) {
        cin >> s;
        score = 0;
        next = 1;

        for (int j = 0; j<s.length();j++) {
            if (s[j]=='O') {
                if (s[j-1] == 'O') {
                    next++;
                }
                score = score + 1*next;
            }

            else if (s[j] == 'X') next = 1;
        }
        cout << score << endl;
    }



    return 0;
}