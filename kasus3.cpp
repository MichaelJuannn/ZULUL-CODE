#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int harga;
    cout << "masukkan nominal tagihan: ";
    cin >> harga;
    cout << "harga anda setelah diskon \n";

    if (100000 <= harga && harga <= 199900 )
    {cout << harga*9/10;}       // diskon 10 persen
    else if (200000 <= harga && harga <= 299900 )
    {cout << harga*8/10;}       // diskon 20 persen
    else if (300000 <= harga && harga <= 399900 )
    {cout << harga*7.5/10;}     // diskon 25 persen
    else {cout << "anda tidak mendapat diskon :D";}
    return 0;

}