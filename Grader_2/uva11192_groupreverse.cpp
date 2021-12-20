#include <iostream>
using namespace std;
int main(){
    int num;
    string line;
    while (true){
        string temp;
        cin >> num;
        if (num == 0){
            break;
        }
        cin >> line;
        int n = line.length()/num;
        int count = 0;
        int count2 = n-1;
        int round = 0;
        while(temp.length() != line.length()){
            round++;
            temp += line[count2];
            if(count2 == count*n){
                count+=1;
                count2 = count*n + n;
            }
            count2-=1;
        }
        cout << temp << endl;
    }
}