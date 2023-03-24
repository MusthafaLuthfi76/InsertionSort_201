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


    for (int i = 0; i < n; i++)                     //Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data Ke- " << (i + 1) << ": ";     //Memasukkan atau menginputkan nilai data ke n
        cin >> arr[i];                              //Menyimpan nilai data n kedalam array
    }
}

void insertionsort() {                      //Prosedur InsertionSort

    int temp;                               //Membuat data temporer atau penyimpanan sementara
    int j;                                  //membuat variabel j sebagai penanda

    for (int i = 1; i < n; i++) {           //1. Looping dengan i dimulai dari 1 hingga n-1
        
        temp = arr[i];                      //2. Simpan nilai arr[i] ke variabel sementara temp

        j = i - 1;                          //3. Setting nilai j sama dengan i-1

        while (j >= 0 && arr[j] > temp)     //4. Looping while dimana nilai j lebih besar sama dengan 0 dan 
                                            //arr[j] lebih besar daripada temp
        {
            arr[j + 1] = arr[j];            //4a. Simpann= arr[j] ke dalam variabel arr[j+1]
            j--;                            //4b. Decrement nilai j by 1
        }

        arr[j + 1] = temp;                  //5. Simpan nilai temp ke dalam arr[j+1]
    }
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
