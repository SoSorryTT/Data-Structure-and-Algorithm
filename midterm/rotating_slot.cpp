#include <bits/stdc++.h>

using namespace std;

void shift(int arr[],int n){
    int tmp[4];
    for (int i = 0; i < 4; ++i) {
        if(i+n>4){
            tmp[i+n-3] = arr[i];
        }

    }
    for (int i = 0; i < 4; ++i) {
        arr[i] = tmp[i];

    }
}

int main() {
    int stk[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> stk[i][j];

        }

    }
    int ans;
    int stk1[4],stk2[4],stk3[4],stk4[4];
    for (int i = 0; i < 4; ++i) {
        stk1 = stk[0];
        cout >>stk1;




    }



}