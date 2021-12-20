#include <iostream>
#include <list>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int result[n];
    int count = n;
    for (int i = 0; i< n; i++){
        result[i] = i+1;
    }
    int temp = 1;
    while(count > 1){
        for(int j = 0; j <count;j++){
            if (temp == k){
                for (int l = j; l <count; l++){
                    result[l] = result[l+1];
                }
                temp = 1;
                j--;
                count--;
            }
            else{
                temp++;
            }
        }
    }
    cout << result[0] << endl;
}