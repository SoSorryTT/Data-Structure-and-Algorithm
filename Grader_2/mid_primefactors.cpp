#include <iostream>
#include <math.h>
#include <set>

using namespace std;

set<int> primeFactors(int number)  
{  
    set<int> answer;
    while (number % 2 == 0)  
    {  
        answer.insert(2);  
        number = number/2;  
    }

    for (int i=3; i <= sqrt(number); i = i + 2) {  
        while (number % i == 0)  
        {  
            answer.insert(i);  
            number = number/i;  
        }  
    }  
    if (number > 2) {  
        answer.insert(number);
    }
    return answer;  
}

int main()
{
    int number;
    cin >> number;
    set<int> answer = primeFactors(number);
    cout << answer.size() << endl;
}