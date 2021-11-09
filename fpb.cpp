#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int a,b,c;
    cout << "program Pbb \n" << "masukkan angka:  \n";                      // phoenix is a dragon btw
    cin >> a >> b;
    if (a<b)                                        // ketentuan pertama jika a lebih kecil dari b maka ditukar dulu
    {
        c = a;
        a = b;
        b = c;
        
    }
    int naga [b];        int j = 0;                                    // mencari pbb mulai dari sini :D
        for (int i=1;i<=b;i++)
        {
               
            if (b%i ==0 && a%i ==0 )
            {
                naga [j]= i;                                    // memasukkan nilai array
                j++;
            }

        }cout << "jadi fpb nya adalah: " << *max_element (naga, naga + j) << "\n";
        if (*max_element(naga, naga +j) == 1){cout << "relatif prima";}
}