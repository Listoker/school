#include <iostream>

using namespace std;

int main()
{
    int a, ff, min=100000, min2=0;
    cin >> a;
    cin >> ff;
    int A[ff] = {};
    int B[ff] = {};
    for(int i=0; i < a; i++){
        for(int i2=0; i2 < ff; i2++){
            cin >> A[i2];
        }
        min2 = 0;
        
        for(int i2=0; i2 < ff; i2++){
            min2 += A[i2];
        }
        if(min2 < min){
            min = min2;
            for(int i2=0; i2 < ff; i2++){
                B[i2] = A[i2];
            }
    }
    }
    if(ff==0)cout<<0;
    else for(int i = 0; i<ff; i++) cout << B[i] << ' ';

    return 0;
}