#include <iostream>

using namespace std;

#define MAX 1000010

int main() {
    int n, m;
    int a[MAX], b[MAX];
    int i, j, count = 0;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < m; i++) {
            cin >> b[i];
        }

        i = j = 0;
        while (i < n && j < m) {
            while (j < m && b[j] < a[i]) j++;
            if (j > m) {
                break;
            }
            if (a[i] == b[j]) {
                count++;
                j++;
            }
            i++;
        }
        cout << count << endl;
        count = 0;
    }
}