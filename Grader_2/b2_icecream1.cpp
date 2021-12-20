#include <iostream>
using namespace std;
const int NUM_MAX = 100000;
int customer[NUM_MAX];
int main(){
    int n;
    cin >> n;
    int count = 0;
    int total = 0;
    for (int i = 0; i < n; i++){
        int command;
        cin >> command;
        if(command == 1){
            int num;
            cin >> num;
            for (int j =0; j < num;j++){
                cin >> customer[j+total];
            }
            total += num;
        }
        else if(command == 2){
            cout << customer[count] << endl;
            count++;
        }
        
    }
    cout << total- count << endl;
}