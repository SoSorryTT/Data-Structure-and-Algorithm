#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char string[101];
    int group;
    while(true) 
    {
        cin >> group;
        if(group != 0)
        {
            scanf("%s", string);
            int length = strlen(string); // str length
            int g = length/group; // num of group
            for(int i=0 ; i < length ; i+=g) {
                for(int j=i+g-1; j >= i ; j--) // start from last index of the group
                    putchar(string[j]);
            }
            puts("");
        }
        else
        {
            break;
        }
    }
}