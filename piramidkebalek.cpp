#include <iostream>
using namespace std;

int main ()
{
    int baris;
    cout << "berapa baris sayang :" << "\n";
    cin >> baris;
    for (int i = baris; i >= 1; --i)
    {
         for (int a = 1; a<=i; a++)
        {cout << a << "";}
        cout << "\n"; 
        
    } return 0;
}