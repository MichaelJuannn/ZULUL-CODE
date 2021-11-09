#include <iostream>
#include <string>
using namespace std;
int main()
{
    char jeniskelamin ; // p / w
    char pernikahan ; // y / n
    char anak ; // y / n
    cout << "apakah anda pria / wanita (p/w) : ";
    cin >> jeniskelamin;
    cout << "apakah anda sudah menikah (y/n) : ";
    cin >> pernikahan;
    cout << "apakah anda memiliki anak (y/n) : ";
    cin >> anak;

    if (jeniskelamin == 'p' && pernikahan == 'y' && anak == 'n')
    {cout << "anda adalah seorang suami";}

    else if (jeniskelamin == 'p' && pernikahan == 'y' && anak == 'y')
    {cout << "anda adalah seorang ayah";}

    else if (jeniskelamin == 'w' && pernikahan == 'y' && anak == 'n')
    {cout << "anda adalah seorang istri";}

    else if (jeniskelamin == 'w' && pernikahan == 'y' && anak == 'y')
    {cout << "anda adalah seorang ibu";}
    else  {cout << "anda adalah seorang single";}

    
    return 0;
    
}