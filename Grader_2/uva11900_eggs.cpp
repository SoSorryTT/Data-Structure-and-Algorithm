#include <iostream>
#define SIZE 35

using namespace std;

int main()
{
    long n;
    long p;
    long q;
    long i;
    long use;
    long T;
    long cas = 1;
    long total;
    long array[SIZE];
    
    cin >> T;
    while(T--)
    {
        cin >> n >> p >> q ;
        for(i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        total = 0;
        use = 0;
        for(i = 0; i < n; i++)
        {
            total += array[i];
            if(total > q || use >= p)
                break;
            use += 1;
        }
        printf("Case %ld: %ld\n", cas++,use);
    }
}