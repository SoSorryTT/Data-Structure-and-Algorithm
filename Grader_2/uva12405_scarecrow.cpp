#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T, Case = 1;
    cin >> T;
    while ( T-- )
    {
        int N;
        cin >> N;
        vector<char> field(N + 2, '#');
        for (int i = 0; i < N; i++)
            cin >> field[i];

        int scarecrows = 0;
        for (int i = 0; i < N; i++)
        {
            if (field[i] == '.')
            {
                field[i] = field[i + 1] = field[i + 2] = '#';
                scarecrows++;
            }
        }
        printf("Case %d: %d\n",Case++, scarecrows);
    }
    return 0;
}