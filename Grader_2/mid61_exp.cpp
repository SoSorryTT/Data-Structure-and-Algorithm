#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int exp[n];
    int count = 1;
    int result = 0;
    for(int i = 0; i<n;i++){
        cin >> exp[i];
    }
    for(int j =0; j<n; j++){
        if (count % 4 == 0){
            result += exp[j]*2;
        }
        else{
            result += exp[j];
        }
        count++;
    }
    cout << result << endl;

}