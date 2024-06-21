#include <iostream>

using namespace std;

int main()
{
    int a, otv=0;
    cin >> a;
    int A[a][a];
    for(int i=0; i < a; i++){
        for(int i2=0; i2 < a; i2++){
            cin >> A[i2][i];
        }
    }
    for(int i=0; i < a; i++){
        for(int i2=0; i2 < a; i2++){
            if(A[i][i2]==A[i2][i]){
                otv++;
            }
        }
    }
    
    if(otv==a*a)
    {cout<<"Yes";}
    else
    {cout<<"No";}

    return 0;
}