#include <iostream>
#include <conio.h> // getch()
using namespace std;

const int MAX = 100;
int arr[MAX];  
int n = 0;

void Info() {
    system("cls");
    cout << "NAMA                      NIM\n";
    cout << "Muhammad Imam Nurrahman   C030324038\n";
    cout << "Muhammad Tarmizi          C030324046\n";
    cout << "Muhammad Lathif           C030324090\n";
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

void InputArray() {
    system("cls");
    cout << "Masukkan jumlah data (1-" << MAX << "): ";
    cin >> n;
    if (cin.fail() || n < 1 || n > MAX) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Jumlah data tidak valid!";
        getch();
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> arr[i];
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Input tidak valid!";
            getch();
            return;
        }
    }
    cout << "Data berhasil dimasukkan!";
    getch();
}

void OutputArray() {
    system("cls");
    if (n == 0) {
        cout << "Data kosong. Masukkan data dulu!";
    } else {
        cout << "Isi Array:\n";
        for (int i = 0; i < n; i++) {
            cout << "Data ke-" << i + 1 << " = " << arr[i] << endl;
        }
    }
    getch();
}

void SortingArray() { // Bubble Sort Ascending
    system("cls");
    if (n == 0) {
        cout << "Data kosong. Masukkan data dulu!";
    } else {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "DATA BERHASIL DI SORTING (Ascending)!\n";
        cout << "\nArray Setelah Disorting:\n";
        for (int i = 0; i < n; i++) {
            cout << "Data ke-" << i + 1 << " = " << arr[i] << endl;
        }
    }
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
            InputArray();
            break;
         case '2':
            OutputArray();
            break;  
          case '3':
            SortingArray();
            break;  
          case '4':
            Info();
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