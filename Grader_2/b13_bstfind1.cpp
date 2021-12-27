#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    set<int> answer;

    for (int i = 0; i < num; i++){
        int M, K;
        cin >> M >> K;

        if (M == 2) {
            int tmp = 0;

            if (answer.find(K) != answer.end()) {
                tmp = 1;
            }

            cout << tmp << endl;

        }

        if (M == 1){
            answer.insert(K);
            
        }
    }
}