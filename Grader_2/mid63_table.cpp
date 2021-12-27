#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int store[num][num];
    int row[num];
    int column[num];
    int result = 0;
    int r;
    int c;

    for(int i =0; i < num; i++) {
        int total = 0;
        for(int j =0; j<num; j++) {
            cin >> store[i][j];
            total += store[i][j]; 
        }
        column[i] = total;
    }

    for(int i =0; i<num; i++) {
        int total = 0;
        for(int j =0; j<num; j++) {
            total += store[j][i];
        }
        row[i] = total;
    }
    // int result = 0;
    for(int i = 0; i<num; i++) {
        if (row[i] == column[i]) {
            result = row[i];
        }
    }
    // int r;
    // int c;
    for (int i = 0; i<num; i++) {
        if(row[i] != result) {
            r = i;
        }
        if(column[i] != result) {
            c=i;
        }
    }
    cout << store[c][r] << endl;
}