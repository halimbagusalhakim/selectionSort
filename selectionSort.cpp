

#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variabel global array a dengan ukuran 20
int n;//deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() { //procedur untuk input
    while (true) {
        cout << "masukan banyaknya elemen pada array :"; //output ke layar
        cin >> n;//input dari pengguna
        if (n <= 20)//jika n kurang dari atau sama dengan 20
            break;//keluar dari loop
        else {
            cout << "\nArray hanya dapat mempunyai maksimal 20 elemen\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << " Masukan elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {//looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }
}
void SelectionSort() {

    for (int j = 0; j <= n - 2; j++) {
        int min_index = j;
        for (int i = j + 1; i <= n - 1; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        swap(arr[j], arr[min_index]);
    }

}
void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    input();
    SelectionSort();
    display();
    return 0;
}