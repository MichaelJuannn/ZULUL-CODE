#include <iostream>
using namespace std;

int main ()
{
    int arr[]= {50, 60, 40, 70, 30, 80, 20, 90, 10};
    int temp =0, res =0;
    while ( temp<7){
        if (arr[temp]>arr[res]) res = temp;
        temp++;
    }cout << res;
    return 0;
}