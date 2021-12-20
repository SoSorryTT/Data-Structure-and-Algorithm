# include <iostream>
# include <stdlib.h>
using namespace std;

int main(){
    int n;
    int data[1000];
    int count = 0;
    cin >> n;
    int num;
    for (int i = 0; i<n; i++){
        cin >> num;
        int temp = (((((num*567)/9)+7492)*235)/47)-498;
        data[i] = (abs(temp)/10)%10;
        count ++;
    }
    for(int i =0; i<count;i++){
        cout << data[i] <<endl;
    }

}