# <h1 align="center">Laporan Modul Searching</h1>
<p align="center">Rifka Annisa Swasthi</p>

## Dasar Teori

Pencarian (Searching) dapat diartikan 
sebagai pekerjaan sehari-hari untuk 
mengetahui apakah data yang diinginkan ada 
dalam sekumpulan data, sehingga jika 
diperlukan dapat diketaui posisi data tersebut.
Disini kita akan belajar Binary Search dan Sequential search

1. Binary Search


Binary search merupakan algoritma yang 
dikembangkan dengan ide dasar yang berbeda 
dalam penangan kasus pencarian data pada 
sebuah pemrograman.
Proses pencarian (search) data pada 
sebuah pemrograman merupakan tindakan 
untuk mencari data pada sebuah data base 
berdasarkan satu kunci (key) data[1]

![BinarySearch](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-4-Sequential-and-Binary-Search/assets/162097297/34cae635-f7ed-46e7-999f-a09f642df5a7)


gambar diambil dari
[text](https://www.geeksforgeeks.org/binary-search/)


Langkah-langkah Pencarian Binary Search

1. Mengurutkan data terlebih dahulu bisa secara
ascending (dari depan ke belakang) atau
descending (dari belakang ke depan).
2. Membagi dua array atau keseluruhan data.
Apabila data yang dicari lebih kecil dari data
yang terletak di tengah, maka pencarian data
akan berlanjut kesebelah kiri. Apabila data yang
dicari lebih besar dari data terletak ditengah,
maka pencarian data akan berlanjut kesebelah
kanan kemudian proses pencarian tersebut akan
terus berulang sampai data yang dimaksud atau
dicari dapat ditemukan [3]

2. Sequential Search

Algoritma sequential search biasanya disebut sebagain metode pencarian beruntun, merupakan algoritma yang 
melakukan pencarian dengan pencocokan dari data yang akan dicari dengan seluruh data yang 
ada pada sekelompok data dengan cara beruntun mulai dari data pertama sampai dengan data 
dapat ditemukan[2]

![example-of-a-sequential-search](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment/assets/162097297/18c33985-bad9-4bfe-bfbe-33cb43e19888)
gambar diambil dari (https://www.myassignmenthelp.net/sequential-search-algorithm)


Langkah-Langkah Pencarian sequential search

1. Melakukan perbandingan beruntun pada
kumpulan data dengan menggunakan keyword
atau kata kunci yang akan dicari
2. Pencarian ini melakukan looping atau
pengulangan dari data pertama hingga jumlah
data ke-n
3. Setiap perulangan dilakukan pencocokan data
dengan kata kunci yang dicari
4. Apabila terdapat kecocokan data dengan kata
kunci yang di cari maka data berhasil ditemukan
dan pencarian di hentikan, sebaliknya apabila
tidak ada kecocokan data hingga data terakhir
maka pencarian dihentikan dan data tidak
ditemukan [3]


## Guided 

### 1. Sequential Search

```C++
#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++){
        if (data[i] == cari){
            ketemu = true;
            break;
        }
    }
        cout << "\t Program Sequantial Search Sederhana\n" << endl;
        cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
    if (ketemu){
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;

}
```
Kode di atas digunakan untuk melakukan pencarial nilai 10 dalam array data dengan cara sequential search. jika nilai 10 ditemukan dalam array data, program akan menampilkan pesan bahwa nilai ditemukan pada indeks tertentu. Jika tidak ditemukan, program akan menampilkan pesan bahwa nilai tersebut tidak ditemukan dalam data array.

### 2. Binary Search

```C++
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int Nomor[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort()
{
    int temp, min, i, j;
    for(i=0; i<7;i++)
    {
        min = i;
        for(j = i+1; j<7; j++)
        {
            if(Nomor[j] < Nomor[min])
            {
                min = j;
            }
        }
        temp = Nomor[i];
        Nomor[i] = Nomor[min];
        Nomor[min] = temp;
    }
}

void binarysearch()
{
    //searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir)
    { 
        tengah = (awal + akhir) / 2;
        if(Nomor[tengah] == cari)
        {
            b_flag = 1;
            break;
        }
        else if(Nomor[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if(b_flag == 1)
        cout << "\nNomor ditemukan pada indeks ke-" << tengah << endl;
    else
        cout << "\nNomor tidak ditemukan\n";
}

int main()
{
    cout << "\tBINARY SEARCH\n" << endl;
    cout << "Nomor:" << endl;
    //tampilkan Data awal
    for(int x = 0; x<7; x++)
        cout << setw(3) << Nomor[x];
    cout << endl;

    cout << "\nMasukkan Nomor yang Anda ingin cari: ";
    cin >> cari;

    cout << "\nNomor diurutkan:";
    //urutkan Nomor dengan selection sort
    selection_sort();
    //tampilkan Nomor setelah diurutkan
    for(int x = 0; x<7; x++)
        cout << setw(3) << Nomor[x];
    cout << endl;

    binarysearch();
    _getche();
    return 0;
}

```
Kode di atas digunakan untuk memperlihatkan penggunaan algoritma binary search untuk mencari nilai tertentu dalam array setelah array tersebut diurutkan menggunakan algoritma selection sort. Pengguna diminta diminta untuk memasukkan nilai yang ingin dicari, lalu program akan menampilkan apakah nilai tersebut ditemukan dan pada indeks ke berapa dalam array Nomor yang telah diurutkan. 

## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include <string>
#include <algorithm>

// Fungsi binary search untuk mencari karakter dalam string
bool binarySearch(const std::string& str, char target) {
    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (str[mid] == target) {
            return true; // Karakter ditemukan
        } else if (str[mid] < target) {
            left = mid + 1; // Cari di sebelah kanan
        } else {
            right = mid - 1; // Cari di sebelah kiri
        }
    }

    return false; // Karakter tidak ditemukan
}

int main() {
    std::string kalimat;
    char huruf;

    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    // Konversi kalimat menjadi lowercase untuk memudahkan pencarian
    std::transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);

    std::cout << "Masukkan huruf yang ingin dicari: ";
    std::cin >> huruf;

    // Konversi huruf menjadi lowercase untuk mencocokkan dengan kalimat yang sudah diubah ke lowercase
    huruf = std::tolower(huruf);

    // Cek apakah huruf ditemukan dalam kalimat menggunakan binary search
    if (binarySearch(kalimat, huruf)) {
        std::cout << "Huruf '" << huruf << "' ditemukan dalam kalimat." << std::endl;
    } else {
        std::cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << std::endl;
    }

    return 0;
}
```
#### Output:
![Screenshot 2024-04-08 044409](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-4-Sequential-and-Binary-Search/assets/162097297/35bd9dee-fb99-4d50-a993-b76676e831c0)


Kode di atas digunakan untuk mencari huruf dalam kalimat dengan fungsi binary search dengan menggunakan loop while untuk mengulangi proses pembagian string dan pencarian karakter ditemukan atau tidak ditemukan. Dengan mendeklarasikan variabel kalimat untuk menyimpan kalimat yang dimasukkan pengguna dan huruf untuk mencari huruf yang ingin dicari, krmudain masukkan huruf memanggul fungsi binarysearch untuk mencari huruf dalam kalimat, menampilkan pesan  kepada pengguna apakah huruf muncul atau tidak, mengembalikan nilai 0 jika sudah selesai.

#### Full code Screenshot:
![Screenshot 2024-04-08 044616](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-4-Sequential-and-Binary-Search/assets/162097297/55e63921-305f-492d-9cad-040d1089f8f4)



### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>

using namespace std;

int main() {
  string kalimat;
  int jumlahVokal = 0;

  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  for (int i = 0; i < kalimat.length(); i++) {
    char huruf = kalimat[i];

    if (huruf == 'a' || huruf == 'A' ||
        huruf == 'e' || huruf == 'E' ||
        huruf == 'i' || huruf == 'I' ||
        huruf == 'o' || huruf == 'O' ||
        huruf == 'u' || huruf == 'U') {
      jumlahVokal++;
    }
  }

  cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

  return 0;
}
```
#### Output:
![Screenshot 2024-04-08 044846](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-4-Sequential-and-Binary-Search/assets/162097297/b14e03ba-bb7d-41ed-aeb6-24b7683cd65d)

Kode di atas digunakan untuk menghitung jumlah huruf vokal dalam sebuah kalimat. pertama dengan mendeklarasikan variabel (kalimat dan jumlahvokal), meminta masukkan kalimat, menghitung huruf vokal dengan loop for dan pernyataan if memeriksa apakah karakter huruf adalah salahsatu huruf vokal dalam alfabet, menamoilkan hasil, mengembalikan nilai. program ini tidak membedakan huruf kecil dan besar.

#### Full code Screenshot:
![Screenshot 2024-04-08 044952](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-4-Sequential-and-Binary-Search/assets/162097297/c739068b-882e-45af-aa3d-701a274e3423)


### 3. . Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>
#include <vector>

// Fungsi untuk menghitung berapa banyak angka 4 dalam data menggunakan Sequential Search
int hitungAngkaEmpat(const std::vector<int>& data) {
    int count = 0;
    for (int angka : data) {
        if (angka == 4) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};

    int jumlahEmpat = hitungAngkaEmpat(data);

    std::cout << "Jumlah angka 4 dalam data adalah: " << jumlahEmpat << std::endl;

    return 0;
}
```
#### Output:
![Screenshot 2024-04-08 045216](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-4-Sequential-and-Binary-Search/assets/162097297/51ca0150-f60b-466f-86fa-e6cfc788e5d4)



Kode di atas digunakan untuk menghitung berapa banyak angka 4 dalam data menggunakan sequential search dnegan mendefinisikan penghitungan angka 4 dalam vektor data, menginisiasi dengan 0 untuk menyimpan jumlah angka 4 yang ditemukan loop for jika ya nilai cout ditambah 1 fungsi kemudian mengembalikan nilau count yang menunjukkan jumlah total angka 4 yang ditemukan dalam vektor.memanggil fungsi dengan vektor data sebagai argumen untuk mendapat jumlah angka 4, menyimpan hasil perhitungan delam variabel jumlahEmpat, mencetak pesan ke konsol yang menunjukkan jumlah angka 4 dalam data, mengembalikan nilai0 jika program sudah selesai.

#### Full code Screenshot:

![Screenshot 2024-04-08 045303](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-4-Sequential-and-Binary-Search/assets/162097297/99f52be0-9e35-4755-9d7d-9ef9b43e62d1)

## Kesimpulan
Binary search dihunakan untuk mencari data berdasarkan kata kunci kekurangan binary search adalah harus mengurutkan data terlebih dahulu dan implementasinya lebih sulit dari sewuential search, semenetara sequential search melakukan pencarian dari menyocokkan data dari keseluruhan data.Pencarian ini akan tidak efektif jika dilakukan dalam jumlah data yang besar karena semakin banyak elemen yang diperiksa maka semakin lama waktu pencarian. 


## Referensi
[1] Risma Dara Awal Aviantika Kustanto Kustanto Muhammad Hasbi. 2021, "Pencarian Data Barang Produk Atribut Sekolah Menggunakan Algoritma Binary Search", STMIK Sinar Nusantara Surakarta:Jurnal Teknologi Informasi dan Komunikasi (TIKomSiN).

[2] Rohmat Indra Borman,Damayanti Damayanti,Yuri Rahmanto,Joni Alfian. 2021, "Penerapan Algoritma Sequential Search pada Aplikasi Kamus Bahasa Ilmiah Tumbuhan", Universitas Atma Jaya Yogyakarta,Jurnal Buana Informatika.

[3] Dian Markuci, Cahyo Prianto. 2022, "ANALISIS PERBANDINGAN PENGGUNAAN ALGORITMA SEQUENTIAL SEARCH DAN BINARY SEARCH PADA APLIKASI SURAT PERJALANAN DINAS", LPPM ITN Malang:JATI (Jurnal Mahasiswa Teknik Informatika).