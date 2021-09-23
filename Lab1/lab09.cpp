#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int N[50];
    int sum = 0;
    int car = 0;

    for (int i=0; i<x; i++) {
        cin >> N[i];
    }

    for (int i=0; i<x; i++) {
        sum = sum + N[i];
        if (sum > 1000) {
            car = car + 1;
            sum = N[i];
        }
    }
    cout << car+1 << endl;
}