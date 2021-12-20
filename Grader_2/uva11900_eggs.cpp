#include <iostream>
#define SIZE 35

using namespace std;

int main(){
    long n,p,q,i,cnt,T;
    long cas=1,sum,a[SIZE];
    
    cin >> T;
    while(T--){
        cin >> n >> p >> q ;
        for(i = 0; i < n; i++){
            cin >> a[i];
        }
        sum = 0;
        cnt = 0;
        for(i = 0; i < n; i++){
            sum += a[i];
            if(sum > q || cnt >= p)
                break;
            cnt++;
        }
        printf("Case %ld: %ld\n", cas++,cnt);
    }
    
    return 0;
}