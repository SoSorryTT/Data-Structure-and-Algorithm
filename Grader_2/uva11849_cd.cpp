#include <iostream>

using namespace std;

#define MAX 1000010

int main()
{
    int n;
    int m;
    int arrat[MAX];
    int array2[MAX];
    int i;
    int j;
    int count_num = 0;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        for (i = 0; i < n; i++)
        {
            cin >> arrat[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> array2[i];
        }
        i = j = 0;
        while (i < n && j < m)
        {
            while (j < m && array2[j] < arrat[i]) j++;
            if (j > m)
            {
                break;
            }
            if (arrat[i] == array2[j])
            {
                count_num++;
                j += 1;
            }
            i += 1;
        }
        cout << count_num << endl;
        count_num = 0;
    }
}