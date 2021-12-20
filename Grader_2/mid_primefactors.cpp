#include <iostream>
#include <math.h>
#include <set>

using namespace std;
set<int> primeFactors(int n)  
{  
    set<int> result;
    while (n % 2 == 0)  
    {  
        result.insert(2);  
        n = n/2;  
    }  
  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            result.insert(i);  
            n = n/i;  
        }  
    }  
    if (n > 2){  
        result.insert(n);
    }
    return result;  
}
int main(){
    int n;
    cin >> n;
    set<int> result = primeFactors(n);
    cout << result.size() << endl;
}