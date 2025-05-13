#include <iostream>
#include <conio.h> // getch()
using namespace std;

void info() {
  system("cls");
  cout << "Indonesia Hebat, Poliban Juara";
getch();
}

void TampilMenu() {
    system("cls");
    cout << "APLIKASI MENU ARRAY\n";
    cout << "==============================\n";
    cout << "1. Input Array\n";
    cout << "2. Output Array\n";
    cout << "3. Shorting Array (Ascending)\n";
    cout << "4. Info\n";
    cout << "5. Exit\n";
    cout << "Pilih menu (1-5): ";
}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

int main() {
    char pilihan;
    do {
        TampilMenu();
        pilihan = getch(); // baca satu karakter saja tanpa enter
        switch (pilihan) 
        {
          case '1':
            mPertama("pertama");
            break;
         case '2':
            mPertama("ke- dua");
            break;  
          case '3':
            mPertama("ke- tiga");
            break;  
          case '4':
            info();
            break;  
          case '5':
            break;
          default:
            system("cls");
            cout<<"Pilihan Tidak Tersedia";
            getch();
            break;
        }
    } while (pilihan !='5');
    cout << "\n\nKELUAR DARI PROGRAM!\n";

  return 0;
}