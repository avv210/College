/* SOAL NO.1
Bagi mahasiswa yang mau menjawab soal nomor 1, jawaban atau diskusinya bisa di thread ini.

Buatlah sebuah program sapaan dalam notasi algoritma dengan spesifikasi sebagai berikut:

    Menampilkan tulisan “Halo, siapa namamu?” di layer, lalu
    Meminta pengguna memasukkan namanya, lalu
    Menampilkan tulisan “Di kota apa kamu sekarang? di layar, lalu
    Meminta pengguna memasukkan nama kotanya sekarang, 
    Hasil akhir berupa kalimat, "Selamat datang <nama> di <kota>".
    Ingat bahwa <nama> dan <kota> adalah string yang dibaca berdasarkan input user

Kode : */

#include <iostream>

using namespace std;

int main() {
    string nama, kota;
    
    cout <<"Halo Siapa Namamu?";
    cin >> nama ; //masukkan nama
    cout << endl;
    
    cout <<"Di kota apa kamu sekarang?";
    cin >> kota; //masukkan kota
    cout << endl;
    
    cout <<"Selamat datang " <<nama <<"di" <<
    kota ;
    
    return 0 ;
}




/* SOAL NO.2
Bagi mahasiswa yang mau menjawab soal nomor 2, jawaban atau diskusinya bisa di thread ini.
Pilih 1 saja untuk luas bangun ruang yang mau diimplementasikan, tapi kalau mau lebih, monggo ya...

Tulislah program input-output sederhana untuk menghitung luas bangun geometri (misalnya:
bujursangkar, segitiga, trapesium, dsb). Data masukan dibaca dari piranti masukan 
dan luas bangun ditapilkan sebagai keluaran.


Kode: 
*/
#include <iostream>
using namespace std;

int main() {
    int p,l; //variabel panjang dan lebar
    
    cout<<"Masukkan Panjang : ";
    cin>>p; //masukkan panjang dalam cm
    cout<<endl;
    
    cout<<"Masukkan Lebar : ";
    cin>>l; //masukkan lebar dalam cm
    cout<<endl;
    
    cout<<"Luar Persegi Panjang = " <<p*l "cm";
    
    return 0;
}




/*SOAL NO.3
Bagi mahasiswa yang mau menjawab soal nomor 3, jawaban atau diskusinya bisa di thread ini. 
Ini kata kuncinya, user input harga barang, lalu outputnya pakai 
rumus: harga_total = harga_barang - (harga_barang * 5%).

Di sebuah toko, pembeli mendapat diskon harga 5% untuk setiap barang yang dibeli. 
Tulislah algoritma yang membaca harga sebuah barang (dalam Rp) dan potongan 
diskon (dalam %), lalu hitunglah harga barang setelah didiskon.


Kode :
*/
#include <iostream>
using namespace std;

int main() {
    
    int harga;
        cout<<"Masukan harga barang = Rp. ";
        cin>>harga;
        
    int hargadiskon = harga - (harga*5/100);
        cout<<"Harga setelah didiskon 5% adalah : " << hargadiskon << endl;
        
    return 0;
}



/*
SOAL NO.4
Bagi mahasiswa yang mau menjawab soal nomor 4, jawaban atau diskusinya bisa di thread ini. 

Buatlah program sederhana dalam notasi algoritma yang membaca temperatur dalam satuan Celcius, 
lalu mengkonversinya ke satuan Fahrenheit, dan menampilkan hasil konversinya ke layar. 
Rumus dari Celcius (C) ke Fahrenheit (F) adalah F = 9 / 5 x C + 32.


Kode :
*/
#include <iostream>
using namespace std;

int main(){
    float c,f;
   
    cout << "Masukkan Suhu Dalam Celcius : "; //input Celcius
    cin >> c;
    cout << endl;
   
    f=(c*1.8) + 32;
   
    cout << "Hasilnya adalah = " <<f <<endl;
   
    return 0;
}



/*
SOAL NO.5
Bagi mahasiswa yang mau menjawab soal nomor 5, 
jawaban atau diskusinya bisa di thread ini. 

Ulangi soal nomor 4 untuk konversi temperature dari Fahrenheit ke Celcius, 
dengan rumus C = 5 / 9 x (F - 32)

Kode :
*/
#include <iostream>
using namespace std;

int main(){

    cout << "Masukkan Suhu Dalam Fahrenheit : "; //input Fahrenheit
    double f;
    cin >> f;
    
    double c;
    c = (f - 32) * 5/9;
    cout <<"Hasilnya adalah = " <<c <<"C";
    
    return 0;
}