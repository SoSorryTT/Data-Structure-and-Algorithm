#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,m;
    map<int,int> temp;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> m;
        if (temp.find(m) != temp.end()){
            temp[m] += 1;
        }
        else{
            temp[m] = 1;
        }

    }
    int count = 0;
    for (auto j : temp){
        if (j.second >= 3){
            count++;
        }
    }
    cout << count << endl;
}