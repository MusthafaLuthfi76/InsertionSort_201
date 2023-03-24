#include <iostream>
using namespace std;

int arr[20];                    //Membuat array dengan panjang data 20
int n;                          //Membuat Variable inputan n

void input() {                  //Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah data pada Array : ";   //Membuat Inputan jumlah element Array
        cin >> n;                                       //Memanggil Variable Inputan n

        if (n <= 20) {                                  //Membuat Kondisi n tidak lebih dari 20
            break; 
        }
        else
        {
            cout << "\nArray yan anda masukkan maksimal 20 elemen. \n"; //Menampilkan Pesan jika data lebih dari 20
        }
    }
    cout << endl;                               //membuat Jarak perbaris program
    cout << "====================" << endl;     //Membuat tampilan susunan data elemen array
    cout << "Masukkan Elemen Array" << endl;    //Output ke layar
    cout << "====================" << endl;     //Output ke layar
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
