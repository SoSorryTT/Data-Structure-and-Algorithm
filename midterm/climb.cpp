#include <iostream>

using namespace std;

int main()
{
    int N;
    int x[1000];

    cin >> N;
    x[0] = 0;
    for (int i=1; i<=N; i++) {
        cin >> x[i];
    }

    int energy = 0;
    int count = 0;
    for (int i=0; i<N; i++) {
        if (count <= 0) {
            if (x[i] < x[i+1]) {
                energy = energy + x[i+1] - x[i];
                count = count + 1;
            }
            else {
                count = 0;
            }
        }
        else {
            if (x[i] < x[i+1]) {
                energy = energy + x[i+1]-x[i] + count;
                count = count + 1;
            }
            else {
                count = 0;
            }
        }
    }
    cout << energy << endl;
}
