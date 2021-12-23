#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;

    if(score > 79) {
        cout << "Excellent job.";
    } 
    else if ((49 < score) && (score < 80)) {
        cout << "Okay.";
    }
    else {
        cout << "Please try harder.";
    }
}