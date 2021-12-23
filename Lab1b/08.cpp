#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int num[20];
    int count = 0;
    for (int i=1; i<=x; i++) {
        num[i] = i;
        num[x+i] = i;
    }
    for (int j=0; j<x; j++) {
        for (int i=1; i<=x; i++) {
            cout << num[i+count];
        }
        cout << endl;
        count += 1;
    }
}