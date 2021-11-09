#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int beli;
    int diskon;
    int potongan;
    int total;

    cout <<"Masukkan harga = ";cin >>beli;
    cout <<"--------------------------------------"<<endl;
    if ((beli>=100000) && (beli<=199900)){
        cout <<"Anda mendapat diskon sebanyak = 10%"<<endl;
        cout <<"--------------------------------------"<<endl;
        potongan = (0.1*beli);
        cout <<"Total potongan = "<<potongan<<endl;
        cout <<"--------------------------------------"<<endl;
        total = beli-potongan;
        cout <<"Total yang anda harus bayar = "<<total<<endl;

    }else if ((beli>=200000) && (beli<=299900)){
        cout <<"Anda mendapat diskon sebanyak = 20%"<<endl;
        cout <<"--------------------------------------"<<endl;
        potongan = (0.2*beli);
        cout <<"Total potongan = "<<potongan<<endl;
        cout <<"--------------------------------------"<<endl;
        total = beli-potongan;
        cout <<"Total yang anda harus bayar = "<<total<<endl;

    }else if ((beli>=300000) && (beli<=399900)){
        cout <<"Anda mendapat diskon sebanyak = 25%"<<endl;
        cout <<"--------------------------------------"<<endl;
        potongan = (0.25*beli);
        cout <<"Tota potongan = "<<potongan<<endl;
        cout <<"--------------------------------------"<<endl;
        total = beli-potongan;
        cout <<"Total yang anda harus bayar = "<<total<<endl;

    }else {
        cout <<"Total yang anda harus bayar = "<<beli<<endl;
    }
    return 0;
}
