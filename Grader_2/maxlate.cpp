#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int const maximum_n = 100010;
int deadline[maximum_n];
int period[maximum_n];

int find_full(int array[], int scale) {
    int full = 0;
    for (int i = 0 ; i<scale; i++) {
        if (array[i] > full) {
            full = array[i];
        }
    }
    return full;
}

int main() 
{ 
    vector< pair <int,int> > vect; 
    int m;
    int n;
    int k;
    cin >> n;
    int want[n];
    int store = 0;

    for (int i = 0; i< n; i++) {
        cin >> m >> k;
        deadline[i] = m;
        period[i] = k;
    }

    for (int i=0; i<n; i++) {
        vect.push_back( make_pair(deadline[i],period[i]));
    } 

    sort(vect.begin(), vect.end()); 

    for (int i= 0; i < n; i++) {
        store += vect[i].second;
        if (store - vect[i].first > 10) {
            want[i] = 1000*(store-vect[i].first-10);
        }
        else {
            want[i] = 0;
        }
    }
    // out = find_full(want, n);
    cout << find_full(want, n) << endl;
}