#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

cout <<"----Selamat Datang----"<<endl;
cout <<"---- Jenis Kelamin = laki-laki atau perempuan ----"<<endl;
cout <<"---- Status = sudah atau belum ----"<<endl;
cout <<"---- Pertanyaan = punya atau tidak ----"<<endl;
cout <<"diatas adalah pertanyaan yang bisa dijawab, diluar jawaban diatas tidak akan diproses"<<endl<<endl;

    string jk;
    string status;
    cout <<"Masukkan Jenis-Kelamin = ";cin >>jk;
    if(jk=="perempuan"){
        cout <<"Status = ";cin >>status;
        if(status=="sudah"){
            string tanya;
            cout <<"punya anak atau tidak = ";cin >>tanya;
            if(tanya=="punya"){
            cout <<"anda adalah seorang ibu"<<endl;
            cout <<"------------------"<<endl;
            }else {
                cout <<"anda adalah istri";
            }
        }else{
            cout <<"anda adalah single";
        }
    }else{
        cout <<"Status = ";cin >>status;
        if(status=="sudah"){
            string tanya;
            cout <<"punya anak atau tidak = ";cin >>tanya;
            if (tanya=="punya"){
            cout <<"anda adalah seorang bapak"<<endl;
            cout <<"------------------"<<endl;
            }else {
                cout <<"anda adalah suami";
            }
        }else{
            cout <<"anda adalah single";
        }
    }

}