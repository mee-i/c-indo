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
#define apung float
#define dobel double
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

void tunda(int milidetik) { // buat fungsi tunda untuk memnunda program
	std::this_thread::sleep_for(std::chrono::milliseconds(milidetik));
}
