# include <iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;
    cin >> num;
    int a[1000];
    for (int i =0; i<num; i++){
        cin >> a[i];
    }
    for (int j = 0; j<num; j++){
        if(a[j] < 1000){
            sum += a[j];
        }
        else{
            sum +=1000;
            if(j < num){
                j++;
            }
            
        }
    }
    cout << sum << endl;
}