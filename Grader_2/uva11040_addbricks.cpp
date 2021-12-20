#include <iostream>

using namespace std;

int main() {
    int cases;
    int i, j;
    cin >> cases;
    while(cases--) {
        int g[10][10] = {};
        for(i = 0; i < 9; i += 2) {
            for(j = 0; j <= i; j += 2)
               cin >> g[i][j];
        }
        int a, b, c;
        for(i = 8; i > 0; i -= 2) {
            for(j = 0; j < i; j += 2) {
                a = g[i][j], b = g[i][j+2];
                c = g[i-2][j];
                g[i][j+1] = (c-a-b)/2;
                g[i-1][j] = g[i][j] + g[i][j+1];
                g[i-1][j+1] = g[i][j+1] + g[i][j+2];
            }
        }
        for(i = 0; i < 9; i++, puts("")) {
            for(j = 0; j <= i; j++) {
                if(j)   putchar(' ');
                cout << g[i][j] ;
            }
        }
    }
    return 0;
}