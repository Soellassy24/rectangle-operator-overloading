#include <iostream>
#include <conio.h>
#include "include/persegiPanjang.hpp"
using namespace std;

void endProgram(){
    system("cls || clear");
    cout << "Thanks for using this program! Press enter to exit program";
    getch();
}
int main(){
    int pilihan;
    const char *index[4] = {"xMin", "xMaks", "yMin", "yMaks"};
    float panjang, lebar, tx, ty;
    persegiPanjang pp3(0,0,0,0);

    cout << "-----------------Tugas Operator Overloading-----------------" << endl;
    cout << "----------------IKHWANUL ABIYU DHIYYA'UL HAQ----------------" << endl;
    cout << "-------------------------5024211048-------------------------" << endl;
    cout << "--------------------TEKNIK KOMPUTER 2021--------------------" << endl;
    cout << "(Dibuat untuk memenuhi tugas Mata Kuliah Pemrograman Lanjut)" << endl << endl;

    cout << "Masukkan Data Persegi Panjang 1" << endl;
    cout << "Panjang (Sumbu X) : "; cin >> panjang; cout << endl;
    cout << "Lebar (Sumbu Y) : "; cin >> lebar; cout << endl;
    cout << "Titik Tengah X : "; cin >> tx; cout << endl;
    cout << "Titik Tengah Y : "; cin >> ty; cout << endl;
    persegiPanjang pp1(tx, ty, panjang, lebar);

    cout << "Masukkan Data Persegi Panjang 2" << endl;
    cout << "Panjang (Sumbu X) : "; cin >> panjang; cout << endl;
    cout << "Lebar (Sumbu Y) : "; cin >> lebar; cout << endl;
    cout << "Titik Tengah X : "; cin >> tx; cout << endl;
    cout << "Titik Tengah Y : "; cin >> ty; cout << endl;
    persegiPanjang pp2(tx, ty, panjang, lebar);

    system("cls || clear");

    while (true){
        cout << "Data Awal" << endl;
        cout << "PERSEGI PANJANG 1" << endl; 
        pp1.output();
        cout << endl;
        cout << "PERSEGI PANJANG 2" << endl;
        pp2.output();
        cout << endl << endl;
        cout << "Silahkan pilih operator yang ingin digunakan" << endl;
        cout << "1. OPERATOR +" << endl;
        cout << "2. OPERATOR -" << endl;
        cout << "3. OPERATOR ++" << endl;
        cout << "4. OPERATOR --" << endl;
        cout << "5. OPERATOR []" << endl;
        cout << "6. OPERATOR ==" << endl;
        cout << "7. Exit Program" << endl;
        cout << "Pilihan anda : "; cin >> pilihan;
        switch (pilihan){
        case 1:
            {
                system("cls || clear");
                cout << endl;
                cout << "OPERATOR + (Mengambil luas gabungan dari 2 persegi panjang)" << endl;
                pp3 = pp1 + pp2;
                if (pp1==pp2){
                    pp3.output();
                }
                cout << "Press enter to continue..." << endl;
                getch();
                system("cls || clear");
            }
            break;
        case 2:
            {
                system("cls || clear");
                cout << endl;
                cout << "OPERATOR - (Mengambil irisan 2 persegi panjang)" << endl;
                pp3 = pp1 - pp2;
                if (pp1==pp2){
                    pp3.output();
                }
                cout << "Press enter to continue..." << endl;
                getch();
                system("cls || clear");
            }
            break;
        case 3:
            {
                system("cls || clear");
                cout << endl;
                cout << "OPERATOR ++ (Menjadikan luas persegi panjang 2 kali lebih besar)" << endl;
                cout << "Masukkan Persegi Panjang yang ingin dikenakan operator ++ : "; cin >> pilihan; cout << endl;
                if (pilihan == 1){
                    ++pp1;
                    cout << "Persegi Panjang 1 setelah diberi Operator ++ : " << endl;
                    pp1.output();
                    --pp1;
                }else if(pilihan == 2){
                    ++pp2;
                    cout << "Persegi Panjang 2 setelah diberi Operator ++ : " << endl;
                    pp2.output();
                    --pp2;
                }
                cout << "Press enter to continue..." << endl;
                getch();
                system("cls || clear");
            }
            break;
        case 4:
            {
                system("cls || clear");
                cout << endl;
                cout << "OPERATOR -- (Menjadikan luas persegi panjang 2 kali lebih kecil (1/2 kali semula))" << endl;
                cout << "Masukkan Persegi Panjang yang ingin dikenakan operator -- : "; cin >> pilihan; cout << endl;
                if (pilihan == 1){
                    --pp1;
                    cout << "Persegi Panjang 1 setelah diberi Operator -- : " << endl;
                    pp1.output();
                    ++pp1;
                }else if(pilihan == 2){
                    --pp2;
                    cout << "Persegi Panjang 2 setelah diberi Operator -- : " << endl;
                    pp2.output();
                    ++pp2;
                }
                cout << "Press enter to continue..." << endl;
                getch();
                system("cls || clear");
            }
            break;
        case 5:
            {
                system("cls || clear");
                cout << endl;
                cout << "OPERATOR [] (Perbandingan indeks Pp1 dan Pp2)" << endl;
                cout << "1. xMin" << endl;
                cout << "2. xMaks" << endl;
                cout << "3. yMin" << endl;
                cout << "4. yMaks" << endl;
                cout << "Masukkan operator yang ingin dibandingkan : "; cin >> pilihan; cout << endl;

                cout << "Nilai " << index[pilihan-1] << " Pp1 : " << pp1[pilihan] << endl;
                cout << "Nilai " << index[pilihan-1] << " Pp2 : " << pp2[pilihan] << endl;
                if (pp1[pilihan] > pp2[pilihan]){
                    cout << index[pilihan-1] << " Pp1 lebih besar dari " << index[pilihan-1] << " Pp2" << endl;
                }else if(pp2[pilihan] > pp1[pilihan]){
                    cout << index[pilihan-1] << " Pp2 lebih besar dari " << index[pilihan-1] << " Pp1" << endl;;
                }else{
                    cout << "Kedua " << index[pilihan-1] << " sama" << endl;
                }
                cout << "Press enter to continue..." << endl;
                getch();
                system("cls || clear");
            }
            break;
        case 6:
            {
                system("cls || clear");
                cout << endl;
                cout << "OPERATOR == (Pembuktian Kedua Persegi panjang saling beririsan/tidak)" << endl;
                if (pp1==pp2){
                    cout << "Kedua persegi panjang beririsan" << endl;
                }else{
                    cout << "Kedua persegi panjang tidak beririsan" << endl;
                }
                cout << "Press enter to continue..." << endl;
                getch();
                system("cls || clear");
            }
            break;
        case 7:
            endProgram();
            return 0;
        }
    }
}