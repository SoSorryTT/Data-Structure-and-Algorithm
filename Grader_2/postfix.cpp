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
        if (buffer.at(0) == '=') {
            break;
        } else if ((buffer.at(0) >= '0') && (buffer.at(0) <= '9')) {
            double val = stod(buffer);
            operands.push(val);
        } else {
            double store[2];
            double total_use = 0;
            store[1] = operands.top();
            operands.pop();
            store[0] = operands.top();
            operands.pop();
            if (buffer.at(0) == '+') {
                total_use = store[0] + store[1];
            } else if (buffer.at(0) == '-') {
                total_use = store[0] - store[1];
            } else if (buffer.at(0) == '*') {
                total_use = store[0] * store[1];
            } else if (buffer.at(0) == '/') {
                total_use = store[0] / store[1];
            }
            operands.push(total_use);
        }
    } while (true);
    cout << fixed << setprecision(4) << operands.top() << endl;
}