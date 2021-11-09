#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

    int hari;
    cout <<"-------JADWAL-------"<<endl;
    cout <<"----1. Hari senin----"<<endl;
    cout <<"----2. Hari selasa----"<<endl;
    cout <<"----3. Hari rabu----"<<endl;
    cout <<"----4. Hari kamis----"<<endl;
    cout <<"----5. Hari jum'at----"<<endl;
    cout <<"----6. Hari sabtu----"<<endl;
    cout <<"----7. Hari minggu----"<<endl;
    cout <<"-----------------------"<<endl;


    cout <<"Masukkan nomer nama hari user ANI = ";cin >>hari;
    cout <<"------------------------------------"<<endl;
    switch(hari){
    case 1:
        cout <<"Besok adalah hari selasa, jangan lupa masuk jam 07.00"<<endl;
        cout <<"Besok lusa adalah hari rabu, jangan lupa masuk jam 07.00"<<endl;
        cout <<"--------------------------------------------------------"<<endl;
        break;

    case 2:
        cout <<"Besok adalah hari rabu, jangan lupa masuk jam 07.00"<<endl;
        cout <<"Besok lusa adalah hari kamis, jangan lupa masuk jam 07.00"<<endl;
        cout <<"--------------------------------------------------------"<<endl;
        break;

    case 3:
        cout <<"Besok adalah hari kamis, jangan lupa masuk jam 07.00"<<endl;
        cout <<"Besok lusa adalah hari jum'at, jangan lupa masuk jam 07.00"<<endl;
        cout <<"--------------------------------------------------------"<<endl;
        break;

    case 4:
        cout <<"Besok adalah hari jum'at, jangan lupa masuk jam 07.00"<<endl;
        cout <<"Besok lusa adalah hari sabtu, tidak ada kelas"<<endl;
        cout <<"--------------------------------------------------------"<<endl;
        break;

    case 5:
        cout <<"Besok adalah hari sabtu, tidak ada kelas"<<endl;
        cout <<"Besok lusa adalah hari minggu, tidak ada kelas"<<endl;
        cout <<"--------------------------------------------------------"<<endl;
        break;

    case 6:
        cout <<"Besok adalah hari minggu, tidak ada kelas"<<endl;
        cout <<"Besok lusa adalah hari senin, jangan lupa masuk jam 07.00"<<endl;
        cout <<"--------------------------------------------------------"<<endl;
        break;

    case 7:
        cout <<"Besok adalah hari senin, jangan lupa masuk jam 07.00"<<endl;
        cout <<"Besok lusa adalah hari selasa, jangan lupa masuk jam 07.00"<<endl;
        cout <<"--------------------------------------------------------"<<endl;
        break;
    }
}

