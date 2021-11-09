#include "iostream"
using namespace std;

int main ()
{
    int baris;
    cout << "berapa baris piramid anda:" << "\n";
    cin >> baris;
    for (int a=1; a <= baris; ++a){
        for (int b=1; b <= a; ++b){cout << b;}
    cout << "\n" << "\n";
    } return 0;
}



