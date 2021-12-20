#include <iostream>
#include <string>
#include <iomanip>
#include <stack>

using namespace std;

int main()
{
    string buffer;

    stack<double> operands;

    do
    {
        cin >> buffer;
        if (buffer.at(0) == '=')
        {
            break;
        }
        else if ((buffer.at(0) >= '0') && (buffer.at(0) <= '9'))
        {
            double val = stod(buffer);
            operands.push(val);
        }
        else
        {
            double temp[2];
            double result = 0;
            temp[1] = operands.top();
            operands.pop();
            temp[0] = operands.top();
            operands.pop();
            if (buffer.at(0) == '+'){
                result = temp[0] + temp[1];
            }
            else if (buffer.at(0) == '-'){
                result = temp[0] - temp[1];
            }
            else if (buffer.at(0) == '*'){
                result = temp[0] * temp[1];
            }
            else if (buffer.at(0) == '/'){
                result = temp[0] / temp[1];
            }
            operands.push(result);
        }
    } while (true);
    cout << fixed << setprecision(4) << operands.top() << endl;
}