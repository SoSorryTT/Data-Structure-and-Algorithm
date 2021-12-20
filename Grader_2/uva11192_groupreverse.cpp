#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[101];
    int g;
    while(true) {
        cin >> g;
        if(g != 0){
            scanf("%s", str) ;
            int len = strlen(str); // str length
            int group = len/g; // num of group
            for(int i=0 ; i < len ; i+=group) {
                for(int j=i+group-1; j >= i ; j--) // start from last index of the group
                    putchar(str[j]);
            }
            puts("");
        } else {
            break;
        }
    }
}