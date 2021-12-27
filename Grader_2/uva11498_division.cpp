# include <iostream>
using namespace std;

string check_division(int v,int w, int x,int y)
{
    if(x == v || y == w)
    {
        return "divisa";
    }
    else if(x >v && y>w)
    {
        return "NE";
    }
    else if(x <v && y>w)
    {
        return "NO";
    }
    else if(x <v && y<w)
    {
        return "SO";
    }
    else
    {
        return "SE"; 
    }
}

int main()
{
    int num1;
    int num2;
    int num3;
    int index_use = 0;
    cin >> num1;
    while (num1 != 0)
    {
        int x;
        int y;
        cin >> num2 >>num3;
        for (int i = 0; i<num1; i++)
        {
            cin >> x >> y;
            cout << check_division(num2,num3,x,y) << endl;
            index_use += 1;
        }
        cin >> num1;
    }
}