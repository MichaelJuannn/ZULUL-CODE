#include <iostream>
using namespace std;

int main (){
    int x = 15, y = 2;
    if (x+y>17 || y-x <20){
        y=x-y;
        x=y+x;
    }else {x=y-x+y%5;}cout << x;
    return 0;
}