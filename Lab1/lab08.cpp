#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int l;
    cin >> l;
    int N[1000];
    for (int i=0; i<x; i++) {
        cin >> N[i];
    }
    int house =0;

    for (int i=0; i<x; i++) {
        for (int k=i+1; k<x; k++) {
            if ((N[i]-N[k] <= l) && (N[i]-N[k] >= -l)) {
                house = house + 1;
            }
        }
    }
    cout << house << endl;
}