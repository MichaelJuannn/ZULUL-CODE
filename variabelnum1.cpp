#include "iostream"
using namespace std;
int main ()
{
    int beta[7]= {3,5};
    for (int i=2; i< 7; i++)
    {
        beta [i]= 3 * i + 2;
        beta [i-1]= beta [i-1]+ beta[i];
        beta[i-2]= beta[i-2]+beta [i-1];
    }for (int x=0; x <= 7;x++){cout << beta[x] << " array " << x << "\n";}
return 0;
}