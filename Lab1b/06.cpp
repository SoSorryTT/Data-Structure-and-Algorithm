#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int hp = 100; // initial HP
  int max_hp = hp;
  if (max_hp > 146) {
      max_hp = 145;
  }
  

  for(int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (hp > 0) {
        hp += a;
    }
    else {
        hp = 0;
    }
    if (hp > max_hp) {
        max_hp = hp;
    }
  }
  cout << max_hp << endl;
}