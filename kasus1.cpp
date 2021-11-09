#include <iostream>
#include <string>
using namespace std;
int main()
{
    int day;
    cout <<"sekarang hari ke (angka) : "; // harus dimasukkan angka karena memakai interger
    cin >> day;
    switch (day) {
        case 1:
        cout << "rabu \n";
        cout << "jangan lupa masuk jam 7";
        break;
        case 2:
        cout << "kamis \n";
        cout << "jangan lupa masuk jam 7";
        break;
        case 3:
        cout << "jumat \n";
        cout << "jangan lupa masuk jam 7";
        break;
        case 4:
        cout << "sabtu";
        break;
        case 5:
        cout << "minggu";
        break;
        case 6:
        cout << "senin \n";
        cout << "jangan lupa masuk jam 7";
        break;
        case 7:
        cout << "selasa \n";
        cout << "jangan lupa masuk jam 7";
        break;
    }
    return 0;
}