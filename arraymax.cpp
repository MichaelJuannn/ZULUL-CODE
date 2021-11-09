#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    int bilangan [] = {10,7,5,15,4,20,13,2,9,16};
    //int temp = 100 % 0;
    cout << "angka max nya adalah  :" << *max_element (bilangan, bilangan + 10) << "\n";
    //cout << temp;
}