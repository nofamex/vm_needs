/*
 * Copyright (C) 2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: MYADDDRESSES
 * REV00: Sat 03 Apr 2021 06:20:43 WIB
 * START: Sat 03 Apr 2021 06:20:43 WIB

Alamat-alamat setiap variabel berikut diurut berdasarkan nama:
aGlobalArray
aGlobalCharacter1
aGlobalCharacter2
aGlobalCharacterPointer
aHeapCharacterPointer
aLocalArray
aLocalCharacter1
aLocalCharacter2
aLocalCharacterPointer
main
malloc
printf
printMyAddress

A) Buatlah method printMyAddress supaya dapat mencetak alamat dari tiap variabel.

B) Buatlah sebuah method untuk mengurutkannya dari alamat tertinggi ke terendah(Bisa beda file, dan boleh pakai bash).

C) Sama seperti B tapi dibalik jadi alamat terendah ke tertinggi.

D) Ada Nilai Bonus jika kita bisa memilih mau mengurutkan dari alamat tertinggi ke terendah atau sebaliknya
(boleh via argumen, dst..).

Note: Bisa menggunakan perintah bash seperti sort untuk langsung mengurutkannya.
Penamaan file tambahan untuk sort(jika ada): myaddress_sort.tipeprogram(c kalau c program, sh kalau bash).
 */

#include <stdio.h>
#include <stdlib.h>

typedef void* AnyAddrPtr;
typedef char* ChrPtr;
typedef char  Chr;

Chr    aGlobalArray[16];
ChrPtr aGlobalCharacter1;
ChrPtr aGlobalCharacter2;
ChrPtr aGlobalCharacterPointer=aGlobalArray;

void printMyAddress (AnyAddrPtr address, ChrPtr message) {
    print("Address of %s: %p", message, address);
}

int main(void) {
    ChrPtr aHeapCharacterPointer=malloc(16);
    Chr    aLocalArray[16];
    ChrPtr aLocalCharacterPointer=aGlobalArray;
    ChrPtr aLocalCharacter1;
    ChrPtr aLocalCharacter2;

/*
    Contoh pemanggilan di main:
    printMyAddress(aGlobalArray,             "aGlobalArray");
    printMyAddress( DST );
 */
}
