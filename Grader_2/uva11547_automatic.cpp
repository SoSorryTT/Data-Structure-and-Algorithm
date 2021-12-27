# include <iostream>
# include <stdlib.h>
using namespace std;

int main()
{
    int num;
    int store[1000];
    int count_num = 0;
    int number;
    cin >> num;
    for (int i = 0; i<num; i++)
    {
        cin >> number;
        int data = (((((number*567)/9)+7492)*235)/47)-498;
        store[i] = (abs(data)/10)%10;
        count_num += 1;
    }
    for(int i =0; i<count_num; i++)
    {
        cout << store[i] <<endl;
    }
}