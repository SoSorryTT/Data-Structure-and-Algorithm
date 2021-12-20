#include <iostream>

using namespace std;

int main()
{
    int n, q;
    int x[1000];
    int item[1000], lottery[1000];
    int use = 0;
    int free_item = 0;

    cin >> n >> q;

    for (int i=0; i<n; i++) {
        cin >> x[i];
    }

    for (int i=0; i<q; i++) {
        cin >> item[i] >> lottery[i];
    }
    for (int i=0; i<q; i++) {
        use = item[i];
        free_item = x[use-1] + lottery[i];
        // cout << x[use] << endl;
        // cout << lottery[i] << endl;
        // cout << free_item << endl;
        for (int j=0; j<n; j++) {
            if (x[j] > free_item) {
                // count += 1;
                // if (count == 1){
                cout << j-1 << endl;
                // }
                // cout << x[j];
                // cout << free_item;
            }
        }
    }
}