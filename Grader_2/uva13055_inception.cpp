#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void inception(stack<string> &dream, string command)
{
    if (command == "Sleep")
    {
        string name;
        cin >> name;
        dream.push(name);
    }
    else if (command == "Kick")
    {
        if (!dream.empty())
        {
            dream.pop();
        }
    }
    else if (command == "Test")
    {
        if (dream.empty())
        {
            cout << "Not in a dream" << endl;
        }
        else
        {
            cout << dream.top() << endl;
        }
    }
}
stack<string> dream;
int main()
{
    int n;
    string command;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> command;
        inception(dream, command);
    }
}