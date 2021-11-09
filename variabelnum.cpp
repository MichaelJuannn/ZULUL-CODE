#include <iostream>
using namespace std;
int main ()
{
    int num1=51, num2=9, res;
    for (int i=1;i<=num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {res=i;}
        
    }cout << res ;
    return 0;
}