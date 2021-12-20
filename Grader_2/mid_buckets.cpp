#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    vector<int> vect = {0,0,0,0,0};
    int tank = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int jar;
        cin >> jar;
        if (jar + vect[0] <1000){
            vect[0] += jar;
        }
        else{
            vect[0] = 0;
            tank += 1000;
        }
        sort(vect.begin(),vect.end());
    }
    cout << tank << endl;
}