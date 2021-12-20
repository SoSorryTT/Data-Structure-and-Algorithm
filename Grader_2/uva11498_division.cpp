# include <iostream>
using namespace std;
string check_division(int v,int w, int x,int y){
    if(x == v || y == w){
        return "divisa";
    }
    else if(x >v && y>w){
        return "NE";
    }
    else if(x <v && y>w){
        return "NO";
    }
    else if(x <v && y<w){
        return "SO";
    }
    else{
        return "SE"; 
    }

}

int main(){
    int a,b,c;
    int index = 0;
    cin >> a;
    while (a != 0){
        int x,y;
        cin >> b >>c;
        for (int i = 0; i<a; i++){
            cin >> x >> y;
            cout << check_division(b,c,x,y) << endl;
            index++;
        }
        cin >> a;
        

    }
}