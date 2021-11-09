#include <iostream>
using namespace std;
int main ()
{
    int array1[] = {120,200,230,130,150};
    int array2[] = {10,20,30,40,50};
    int temp, result = 0;
    for (temp=0; temp <5; temp++){
        result += array1[temp];

    }
    for (temp = 0; temp < 4; temp++){
        result += array2[temp];

    }cout << result << "\n" << temp;
    return 0 ;
}