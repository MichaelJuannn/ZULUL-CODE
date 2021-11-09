#include <iostream>
using namespace std;

int main ()
{
    int i, j;
    for (i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if (i==j)
            cout << "1";
            else cout << "0";

        }
    }return 0;
}