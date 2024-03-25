// ucp1_algoritma.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//1. algoritma dengan menggunakan bubble sort adalah algoritma yang paling sederhanan karna digunakan untuk data data kecil dan diurutkan dari 
//  angka yang paling kecil ke yang paling besar dengan mencari angka yang paling besar trelebih dahulu, cara mmengurutkannya dengan cara membandingkan dengan angka disampingnya 
// jika angka disampingnya lebih keci maka akan ditukar posisinya tapi jika angka disampingnya lebih besar maka posisinya tetap.

//2. pada algoritma shell sort data dibagi dengan jarak 3 setelah itu baru diurutkan dengan metode insertion sort setelah urut data tersebut di gabung lagi menjadi 1 bagian 
// jika masih terdapat data yang tidak urut maka akan diulang sampai angka nya urut dengan pembagian jarak 1

//3. insertion sort karena insertion sort digunakan pada data yang sebagian besar sudah urut

#include <iostream>
using namespace std;

int n;
int DIVA[20];
int j;


void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mmempunyai maksimal 20 elemen.\n";
        }

    }cout << endl;
    cout << "=====================" << endl;
    cout << "masukan elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> DIVA[i];
    }
}

void selectionsort()  {
     for (int j = 0; j <= n - 2; j++) {
         int min_index = j;
         for (int i = j + 1; i < n; i++) {
             if (DIVA[i] < DIVA[min_index])
             {
                 min_index = i;
             }
         }int temp = DIVA[j];
         DIVA[j] = DIVA[min_index];
         DIVA[min_index] = temp;
     }  
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int i = 0;i < n; i++) {
        cout << DIVA[i] <<endl;
    }cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
}
int main(){
    input();
    selectionsort();
    display();
    return 0;
}
