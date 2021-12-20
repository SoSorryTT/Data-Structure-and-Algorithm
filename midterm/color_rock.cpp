#include <iostream>

using namespace std;

int main()
{
    int N, K;
    int x[100000];

    cin >> N >> K;

    for (int i=0; i<N; i++) {
        cin >> x[i];
    }

    // int count = 0;
    // if (K == 2) {
    //     for (int q=0; q<N; q++) {
    //         for (int i=0; i<N; i++) {
    //             if (x[i] == x[i+1]) {
    //                 for (int j=i; j<N-2; j++) {
    //                     x[j] = x[j+2];
    //                     count = count + 1;
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout << count*2 << endl;
    int count = 0;
    int remain = 0;
    int left[N];
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (x[i] == x[j]) {
                count = count + 1;
                left[]
                // cout << x[i] << endl;
            }
        }
        if (count/2 == 0) {
            remain = remain + 1;
        }
    }
    cout << remain << endl;
}