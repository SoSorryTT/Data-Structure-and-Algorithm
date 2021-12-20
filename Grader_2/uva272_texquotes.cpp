#include <iostream>

using namespace std;

int main()
{
    string text;
    bool open = true;
    while (getline(cin, text))
    {
        for (int i=0 ; i < text.length() ; ++i)
        {
            if (text[i] == '"' && open)
            {
                text.replace(i,1,"``");
                open = false;
            }
            else if (text[i] == '"' && !open)
            {
                text.replace(i,1,"''");
                open = true;
            }

        }
        cout << text << endl;
    }
}