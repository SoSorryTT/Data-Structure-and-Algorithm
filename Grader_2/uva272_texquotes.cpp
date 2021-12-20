#include <iostream>
using namespace std;
int main(){
    bool state = true;
    string line;
    while(getline(cin,line)){
        for(auto i : line){
            if(i == '"'){
                if(state){
                    cout << "``";
                    state = false;
                }
                else{
                    cout << "''";
                    state = true;
                }

            }
            else{
                cout << i ;
            }
        }
        cout << endl;
    }
}