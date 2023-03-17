// c-indo.h by mee-i

#pragma once
#include <iostream>
#include <math.h>
#include <chrono>
#include <thread>

#define bilangan_bulat int
#define bulat int
#define panjang long
#define pendek short
#define apakah bool
#define karakter char
#define kar char
#define pecahan float
#define dobel double
#define desimal double
#define konstan const
#define benar true
#define salah false
#define struktur struct
#define ruang void
#define kelas class
#define publik public
#define pribadi private
#define tali std::string
#define rangkaian std::string
#define BATAL NULL

#define kurang < // kurang dari
#define kurangsama <= // kurang dari atau sama dari
#define lebih > // lebih dari
#define lebihsama >= // lebih dari atau sama dari
#define adalah ==
#define bukan !=
#define atau ||
#define maka {
#define ini {
#define lalu {
#define akhir }
#define masuk <<
#define keluar >>

#define baris std::cout<<"\n"
#define cetak std::cout<<
#define cetakf printf
#define untuk for
#define jika if
#define lain else
#define lainnya else
#define ganti switch
#define hal case
#define hapus std::erase
#define ketika while
#define istirahat break
#define akar sqrt
#define coba try
#define tangkap catch
#define lempar throw
#define rangkaian_ke_bulat std::stoi
#define ke_rangkaian std::to_string
#define pengecualian std::exception
#define apa what()
#define kembali return

// fungsi penjumlahan
int tambah(int a, int b) {
    return a + b;
}

// fungsi pengurangan
int kurang(int a, int b) {
    return a - b;
}

// fungsi perkalian
int kali(int a, int b) {
    return a * b;
}

// fungsi pembagian
int bagi(int a, int b) {
    return a / b;
}

// fungsi menghitung faktorial
int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

// fungsi menghitung pangkat
int pangkat(int a, int b) {
    return pow(a, b);
}

// fungsi menghitung logaritma natural
Pecahan logaritma(Pecahan x) {
    return log(x);
}

// fungsi menghitung sinus
Pecahan sinus(Pecahan sudut) {
    return sin(sudut);
}

// fungsi menghitung kosinus
Pecahan kosinus(Pecahan sudut) {
    return cos(sudut);
}

// fungsi menghitung tangen
Pecahan tangen(Pecahan sudut) {
    return tan(sudut);
}

// fungsi menghitung eksponensial
Pecahan eksponensial(Pecahan x) {
    return exp(x);
}


void tunda(int milidetik) { // buat fungsi tunda untuk memnunda program
	std::this_thread::sleep_for(std::chrono::milliseconds(milidetik));
}
