#include <iostream>
using namespace std;
int* insertX(int n, int arr[], 
             int x, int pos) 
{ 
    int i; 
    n++; 
    for (i = n; i >= pos; i--) 
        arr[i] = arr[i - 1]; 
    arr[pos - 1] = x; 
  
    return arr; 
}
int find_index(int n, int arr[], int x){
    for(int i =0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    int x[n+m];
    for (int i = 0; i< n; i++){
        cin >> x[i];
        x[i] = i+1;
    }
    for (int i = n ;i<n+m; i++){
        int ball,pos;
        cin >> ball >> pos;
        insertX(n+m,x,i+1,find_index(n+m,x,pos)+2);
        
    }
    for (int i = 0; i < n+m; i++){
        cout << x[i] << endl;
    }
}