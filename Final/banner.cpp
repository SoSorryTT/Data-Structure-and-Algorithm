#include<iostream>

using namespace std;


int main()
{
    int N;

    cin >> N;

    int array[N][2];
    int max_value = 0;

    for (int i=0; i<N; i++) {
        array[i][0] = i+1;
        cin >> array[i][1];
    }

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (array[j][1] == array[i][1]) {
                if (abs(array[j][0] - array[i][0]) > max_value) {
                    max_value = abs(array[j][0] - array[i][0]);
                }
                break;
            }
        }
    }

    if (max_value == 0) {
        cout << -1 << endl;
    }
    else {
        cout << max_value << endl;
    }
}