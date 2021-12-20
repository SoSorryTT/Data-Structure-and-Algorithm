#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp[n][n];
    int column[n];
    int row[n];
    for(int i =0; i < n; i++){
        int sum = 0;
        for(int j =0; j<n; j++){
            cin >> temp[i][j];
            sum += temp[i][j]; 
        }
        column[i] = sum;
    }
    for(int i =0; i < n; i++){
        int sum = 0;
        for(int j =0; j<n; j++){
            sum+= temp[j][i];
        }
        row[i] = sum;
    }
    int result = 0;
    for(int i = 0; i<n; i++){
        if (row[i] == column[i]){
            result = row[i];
        }
    }
    int r,c;
    for (int i = 0; i<n;i++){
        if(row[i] != result){
            r = i;
        }
        if(column[i] != result){
            c=i;
        }
    }
    cout << temp[c][r]<<endl;


}