// #include <iostream>

// int main(void) {
//     int N, M;
    
//     std::cin >> N >> M;
    
//     int A[N][M];
//     int B[N][M];
//     int result[N][M];

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             std::cin >> A[i][j];
//             result[i][j] = A[i][j];
//         }
//     }

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             std::cin >> B[i][j];
//             result[i][j] += B[i][j];
//         }
//     }

//     // result 출력
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             std::cout << result[i][j] << ' ';
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

#include <iostream>

using namespace std; 

int main(void) {

    int N, M;

    cin >> N >> M;

    int A[N][M];
    int B[N][M];
    int result[N][M];

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> A[i][j];
            }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> B[i][j];
            result[i][j] = A[i][j] + B[i][j];
            
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}