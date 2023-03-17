#include <iostream>
#include <thread>
#include "c-indo.h"

bulat kali(bulat nilai_a, bulat nilai_b) maka
    kembali nilai_a * nilai_b; // beri kembali nilai a dikali oleh nilai b
akhir

int main() {
    cetak "apakah dia siswa?\n";
    tunda(1000);
    tali inisiswa = "dia adalah siswa\n";
    rangkaian bukansiswa = "dia bukan siswa\n";
    apakah siswa = salah; // benar atau salah
    
    jika (siswa adalah benar) maka
        cetak inisiswa;
    akhir lain maka
        cetak bukansiswa;
    akhir

    cetak "\n\n"; // "\n" untuk menambahkan baris baru
    tunda(1000);
    ////////////////////////////////// Pertambahan //////////////////////////////////
    bulat a = 1;
    bilangan_bulat b = 1;
    bulat hasil;
    hasil = a + b;
    cetak "hasil dari a + b adalah : " masuk hasil;
    /////////////////////////////////////////////////////////////////////////////////
    baris; // buat 1 baris baru
    baris; // buat baris lagi
    tunda(1000);
    ////////////////////////////////// Perkalian ////////////////////////////////////
    cetak "perkalian 12 x 10: " masuk kali(12, 10);
    /////////////////////////////////////////////////////////////////////////////////

    baris;
    baris;
    tunda(1000);

    ///////////////////////////// Percobaan Kesalahan ///////////////////////////////
    cetak "mencoba untuk melakukan kesalahan...\n";
    coba ini
        std::thread().detach();
    akhir
    tangkap (pengecualian &error) lalu
        cetak "ada kesalahan disini : " masuk error.apa;
    akhir
    /////////////////////////////////////////////////////////////////////////////////

    baris;
    baris; // menambahkan 2 baris baru

    /////////////////////////////// Perputaran (Loop) ///////////////////////////////
    cetak "while loop";
    apakah berputar = benar;
    bulat putaran = 0;
    ketika(berputar adalah benar) maka // putaran (loop) terus menerus apabila boolean berputar adalah benar
        baris;
        putaran += 1; // tambah 1 setiap putaran
        jika(putaran lebih 10) maka // jika lebih dari 10 maka
            berputar = salah; // mengubah boolean berputar menjadi salah agar putaran (loop) berhenti
        akhir lainnya maka
            cetak "putaran ke " masuk putaran;
        akhir
        tunda(500); // tunda program selama 0.5 detik (500 milidetik)
    akhir

            baris; baris;

    cetak "for loop";
    untuk(int c = 1; c < 11; c++) maka
        baris;
        cetak "putaran ke " masuk c; 
        tunda(500); // tunda program selama 0.5 detik (500 milidetik)
    akhir
    /////////////////////////////////////////////////////////////////////////////////


    baris;
    baris;

    //////////////////////////////////// Akar ///////////////////////////////////////
    bulat d = 25;
    cetak "akar dari d adalah " masuk akar(d);
    desimal x = 7;
    cetak "akar dari x adalah " masuk akar(x);
    /////////////////////////////////////////////////////////////////////////////////

    baris;
    baris;
    cetak "program telah selesai, menutup dalam 5 detik...";
    tunda(5000); // tunda program 5 detik

    kembali 0;
}
