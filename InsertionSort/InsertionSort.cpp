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


        cout << "\nPass " << i << ": ";     //Output ke Layar
        for (int k = 0; k < n; k++) {       //Looping nilai k dimulai dari o hingga n-1
            cout << arr[k] << " ";          //Output ke layar
        }

    }
}

void display() {                            //Procedure display
    cout << endl;                                           //Output baris kosong
    cout << "====================" << endl;                 //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;    //Output ke layar
    cout << "====================" << endl;                 //Output ke layar
    for (int j = 0; j < n; j++) {           //Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl;               //Output ke layar
    }
    cout << endl;                           //Output baris kosong
}


int main()
{
    input();                                //Memanggil input
    insertionsort();                        //Memanggil isertationsort
    display();                              //Memanggil display
}

