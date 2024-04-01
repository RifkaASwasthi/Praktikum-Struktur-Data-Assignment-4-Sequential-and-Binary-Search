# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Rifka Annisa Swasthi</p>

## Dasar Teori
Algoritma    pengurutan    atau sortingalgorithm adalah algoritma yang menyimpan suatu    list    pada    suatu    urutan    tertentu, biasanya      membesar      atau      mengecil, biasanya    digunakan    untuk    mengurutkan angka    ataupun    huruf. [1] tujuan dari pengurutan data adalah agar Data yang  diurutkan  mudah  dicari,  mudah diperiksa,  jika  terjadi  kesalahan,  mudah diperbaiki.  Data  yang  diurutkan  dengan  baik  juga  mudah  dihapus  jikaterkadang  data  tidak  lagi  diperlukan.  Selain  itu, dengan memilah data, kita akan lebih mudahmemasukkan data atau lakukan penggabungan.

Ada berbagai macam algoritma pengurutan. Namun dalam laporan kali ini akan dibahas insertion sort dan bubble sort, yang menjadi domain adalah mencoba menganalisis kecepatan waktu dari algortima bubble sort dan insertion sort, dengan sekali inputan data, dari kedua algoritma ini yang manakah lebih cepat dan efisien dalam menyelesaikan pengurutan dengan interval data tersebut.Biasanya  pengurutan  terbagi  menjadi  dua yaitu Ascending pengurutan       dari karakter/angka    kecil    ke    karakter/angka besar    dan Descending(pengurutan    dari karakter/angka    besar    ke    karakter/angka kecil).
1. Insertion Sort

Insertion sort adalah metode pengurutan dengan cara menyisipkan eleman larik pada posisi yang tepat. Cara mengimplementasikannya menggunakan pengurutan ditempat yang membandingkan elemen saat itu dengan elemen sebelumnya yang sudah diurut, lalu menukarnya terus sampai posisisnya tepat. 
![Screenshot 2024-04-01 010841](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/2bb07f4c-ac8d-416e-995e-1a6c1000a02b) 
Setiap  satu  kali Pass akan  ada  satu nilai  yang  disisipkan.  Kemudian  pada Pass n-1   data   akan   terurut.   Data   yang   telah terurut      diberi      warna      biru.      Panah menunjukkan  perubahan  posisi  nilai  yang akan  disisipkan.  Data  yang  akan  dipindah diberi warna merah. [1]

2. Bubble Sort

Bubble sort adalah metode pengurutan data dengan cara menukar data pada data pertama dan pada data pertama tetap disebelahnya sampai anda yakin tidak akan ada lagi perubahan atau pertukaran dalam iterasi tertentu. [2]Misal Descending dengan cara membandingkan bilangan yang terbesar dengan bilangan didepannya, jika lebih besar maka tetap disitu dan sebaliknya, kemudian dibandingkan lagi dengan bilangan selanjutnya jika lebih besar pergi sampai bilangan terbesar ada di terakhir urutan.
![Screenshot 2024-04-01 013700](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/d67d67e0-7200-480a-a64c-2409e8a84c11)


Keuntungan menggunakan bubble sort adalah bubble sort merupakan metode paling sederhana untuk mengurutkan data dan bubble sort adalah algoritma yang mudah untuk dipelajari. Semetara kekurangan Bubble sort adalah metode pengurutannya tidak efisien apalagi untuk menangani data yang besar dan juga jumlah perulangan yang dilakukan oleh algoritma ini akan tetap sama jumlahnya meskipundata yang diurutkan sudah cukup terurut. [2]

Kompleksitas Waktu

Notasi Big O adalah notasi matematis yang mendefinisikan efisiensi algoritma. Artinya, bagaimana runtime kita tumbuh relatif terhadap ukuran input. Komplesitas adalah apa yang mengambarkan tingkat pertumbuhan dengan berapa banyak langkah yang diperlukan untuk menjalankan suatu algoritma.

Waktu yang dibutuhkan algoritma untuk menyelesaikannnya akan meningkat dengan laju yang berbanding lurus. Konsep Waktu Polinomial tentang komputasi algoritma yang berjalan dalam waktu n 100 atau bahkan waktu n tidak mungkin dilakukan pada data yang besar. Waktu Quasi-linier, yaitu waktu qlin := n. (log n) dimana O(1), Mengurangi masalah eksponen n. [3]
![Screenshot 2024-04-01 031621](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/a07ede4c-038b-48af-8e35-1ef5d8524795)
Dari urutan spektrum kompleksitas waktu diatas dapat dilihat bahwa hasil O(1) adalah best case dan O(n) adalah worst case yang artinya ketika kita membuat program dan kita jumlahkan setiap elemen akan memprediksi sementara apakah program efektif dijalankan atau tidak. 

Dalam bentuk Grafik, Semakin waktu yang dubutuhkan algoritma menyelesaikan semakin berbanding lurus dengan laju yang dibuat.
![Screenshot 2024-04-01 025326](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/1ad7e255-8cef-45fc-bd83-a9cde0f8af6a)

Berbagai macam kompleksitas [4]

1. O(1)

• Kompleksitas O(1) berarti waktu pelaksanaan algoritma adalah tetap, tidak
bergantung pada ukuran masukan.

• Algoritma yang memiliki kompleksitas O(1) terdapat pada algoritma yang
instruksinya dijalankan satu kali (tidak ada pengulangan)

2. O(log n)

• Kompleksitas waktu logaritmik berarti laju pertumbuhan waktunya
berjalan lebih lambat daripada pertumbuhan n.

• Algoritma yang termasuk kelompok ini adalah algoritma yang
memecahkan persoalan besar dengan mentransformasikannya
menjadi beberapa persoalan yang lebih kecil yang berukuran sama.

• Contoh algoritma: algoritma binary search

3. O(n)

• Algoritma yang waktu pelaksanaannya lanjar (linier) umumnya
terdapat pada kasus yang setiap elemen masukannya dikenai proses
yang sama.

4. O(n log n)

• Waktu pelaksanaan yang n log n terdapat pada algoritma yang
memecahkan persoalan menjadi beberapa persoalan yang lebih kecil,
menyelesaikan tiap persoalan secara independen, dan menggabung solusi
masing-masing persoalan (divide and conquer).

5. O(n2)

• Algoritma yang waktu pelaksanaannya kuadratik hanya praktis
digunakan untuk persoalan yang berukuran kecil.

6. O(n3)

• Seperti halnya algoritma kuadratik, algoritma kubik memproses setiap
masukan dalam tiga buah kalang bersarang.

7. O(2n)

• Algoritma yang tergolong kelompok ini mencari solusi persoalan secara "brute
force“.

8. O(n!)

• Algoritma jenis ini memproses setiap masukan dan menghubungkannya
dengan n – 1 masukan lainnya.

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; j++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i]= arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {
    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};
    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);
    bubble_sort(a, length);
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}


```
Kode di atas adalah conoth dari bubble sort yang mengurutkan data dari terkecil ke besar atau ascending. dari kodingan menggunakan looping while yang akan berjalan selama pertukaran eleman dalam array terjadi jika dalam iterasi tidak ada pertukaran yang dilakukan, artinya array sudah terurut dan not_sorted diubah menjadi false. jika di run akan menghasilkan output angka 15.3 maju menggantikan angka 22.1.

Kompleksitas Waktu O(n2)
While loop sampai tidak ada lagi pertukaran yang dilakukan, array sudah terurut, jumlah iterasi loop while bergantung pada banyaknya pertukaran yang dilakukan iterasi sebelumnya, jumlah operasi komparasi dan pertukaran pada iterasi luar adalah Jumlah(j=1 hingga n-1) dari (n-1), yaitu setara (n-1)*(n-1)

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

```C++
#include <iostream>

using namespace std;

void insertion_sort(char arr[], int length){
    int i, j;
    char tmp;

    for (i = 1; i<length; i++){
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end pf while loop
    }//end of for loop
}

void print_array(char a[], int length) {
     
     for(int i=0; i<length; i++){
        cout << a[i] << "\t";
     }
     cout << endl;
}

int main () {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "urutan karakter sebelum sorting:" << endl;
    print_array(a, length);

    cout << "\nUrutan karakter setelah sorting:" << endl;
    print_array(a, length);
}
```
Kode di atas digunakan untuk menyeleksi mana nomor genap dan mana nomor ganjil dengan menerima sebuah array karakter dan  panjang array sebagai argumen, dengan memilih satu elemn pada setiap iterasi dan memasukkannya ke posisi yang benar, selanjutnya looping dan jika elemen yang akan dimasukkan lebih kecil dari elmen yang dibandingkan, maka posisi elemen yang dibandingkan akan digeser ke kanan untuk memberikan ruang bagi elemen yang akan dimasukkan, proses ini terus terjadi sampai terurut.

Komplksitas waktunya adalah O(n2) 
Iterasi Luar dan dalam
loop dari i=1 hingga i=n-1, n adalah panjang array terdapat loop while yang berjalan sampai kondisi tidak terpenuhi.
Jumlah (i=1 hingga n-1)
(n-1)+(n-2)+(n-3)+...+1, (n-1)*n/2 = O(n2) Kuadratik yang digunakan untuk data skala kecil


## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! (Score: 30)


```C++
#include <iostream>

void selectionSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap arr[i] with arr[maxIndex]
        float temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    float ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips) / sizeof(ips[0]);

    std::cout << "IPS sebelum diurutkan:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << ips[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(ips, n);

    std::cout << "IPS setelah diurutkan dari terbesar hingga terkecil:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << ips[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

```
#### Output:
![Screenshot 2024-04-01 071142](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/12fcc686-8c61-48b1-b42c-9ec707027182)



Kode di atas adalah algoritma selection sort utnuk mencari elemen terbesar atau terkecil pada setiap iterasi luar dan menukarkannya dengan elemen yang tepat sesuai dengan urutan yang diinignkan. Program mengurutkan secara Descending, Panjang array dihitung mengunakan formula sizeof(ips) yang menghasilkan jumlah elemen dalam array, nilai ips diurutkan dicetak ke layar. fungsi selection sort untuk mengurutkan nilai terbesar ke terkecil.

Kompleksitas waktu
Iterasi O hingga n-1, jumlah iterasi sebanyak n-1, kompleksitas waktu loop pertama O(n). Loop kedua iterasi i+1 hingga n-1 pada setiap iterasi loop pertama, (n-i-1) kompelksitas waktu O(n2) 


#### Full code Screenshot:
![Screenshot 2024-04-01 071254](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/06a179cb-c51d-4194-aa89-e77c5d5015f1)



### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort! (Score: 30)



```C++
#include <iostream>
#include <string>

void bubbleSort(std::string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] with arr[j + 1]
                std::string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::string names[] = {"Rifka", "Fina", "Anggun", "Widya", "Dita", "Atha", "Naufal", "Egi", "Iqbal", "Fiqoh"};
    int n = sizeof(names) / sizeof(names[0]);

    std::cout << "Nama-nama sebelum diurutkan:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << names[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(names, n);

    std::cout << "Nama-nama setelah diurutkan secara alfabetis:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << names[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


```
#### Output:
![Screenshot 2024-04-01 071620](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/3f5c00ac-5bcd-445b-83f4-a8cd8476fac9)



Kode di atas adalah bubble sort untuk mengurutkan array dari string yang berisi nama nama, menggunakan loop bersarang utnutk melakukan perbandingan dan pertukaran elemen, fungsi main berisis nama yang akan diinisialisasi, fungsi bubble sort dipangiil untuk mengurutkan array names secara alfabet kemudian nama akan dicetak yang sebalumnya, "Rifka", "Fina", "Anggun", "Widya", "Dita", "Atha", "Naufal", "Egi", "Iqbal", "Fiqoh" menjadi Anggun, atha, Dita, Egi, Fina, Fiqoh, Iqbal, Rifka, Widya.

Kompleksitas waktu O(n2) karena adanya dua loop bersarang yang masing-masing berjalan sebanyak n-1 kali, sehingga total operasi perbadandingan dan pertukaransekitar n2/2. 

#### Full code Screenshot:
![Screenshot 2024-04-01 071719](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/4684b915-5866-4938-986e-bd90e1a29862)



### 3.Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)! (Score: 40)
## Gambar Soal
![Screenshot 2024-03-31 174518](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/95937fe3-4538-444f-943c-78de5266e75b)



```C++
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cout << "Masukkan jumlah karakter yang ingin diinput: ";
    std::cin >> n;

    char characters[n];
    std::cout << "Masukkan " << n << " karakter:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> characters[i];
    }

    // Sorting secara naik (ascending)
    std::sort(characters, characters + n);

    std::cout << "Hasil sorting secara naik (ascending):" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << characters[i] << " ";
    }
    std::cout << std::endl;

    // Sorting secara turun (descending)
    std::sort(characters, characters + n, std::greater<char>());

    std::cout << "Hasil sorting secara turun (descending):" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << characters[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


```
#### Output:
![Screenshot 2024-04-01 071856](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/8c1303d1-7f4d-4b03-b284-e2962a5855f4)



Kode di atas melakukan pengurutan karakter secara ascending dan descending karena ada fungsi std::sort. dari input jumlah karakter unutk input jumlah karakter, std::sort akan mengurutkan karakter dalama array secara ascending, di outputkan. std::sort kembali untuk mengurtukan secara descending stg::greater sebagai fungsi pembanding untuk urutan turun. diinputkan dia maka akan keluar output Dai untuk ascending dan Iad untuk descending.

Kompleksitas waktu
Karena sorting dilakukan dua kali Ascending dan Descending maka komplesitas waktunya adalah O(n log n), nantinya jumlah operasi dilakukan meningkat seiring dengan peningkatan jumlah karakter.


#### Full code Screenshot:
![Screenshot 2024-04-01 071942](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-3-Sorting/assets/162097297/b1665c86-2269-40b8-ac47-f994a8e06314)




## Kesimpulan
Ringkasan Pembelajaran

Sorting adalah membandingkan nilai dari suatu elemn sampai mendapatkan hasil yang diinginkan, jari segi urutan besar kecil dapat dibedakan menjadi dua yaitu Ascending (Besar ke Kecil) dan Descending (Kecil Ke besar), jenis sorting ada banyak. Naamun yang kita bahas adalah bubble sorting dan insertion sorting.

Bubble sorting adalah pengurutan dari membandingkan nilai dengan menukar nukar sampai selesai, Kelemahan bubble sorting adalah tidak bisa digunakan dalam penggunaan dta yang besar karena kompleksitas waktunya O(n2) atau termasuk worst case. Sementara itu Insertion sort adalah pengurutan elemen dengan membandingkan dan memasukkan setiap elemen ke posisinya, cara ini mirip bermain karti remi secara berurutan. insertion sort sama dengan bubble sort memiliki kompleksitas waktu O(n2) atau termasuk worst case atau avarage.

Evaluasi Pembelajaran

Dalam belajar Algoritma dibutuhkan kesabaran karena untuk memahami setiap codingan harus rajin memahami setiap error atau jalannya codingan agar sesuai yang kita inginkan. dalam memahami bahas pemrograman setiap orang memiliki kapasitas yang berbeda beda dari
Teori neo-Piaget telah mencerahkan kita tentang perbedaan kognitif individu.Perkembangan berpikir siswa dapat digolongkan menjadi empat kemampuan berpikir yang berbeda:
mereka yang belum bergabung; orang yang menghasilkan skema yang tersebar tanpa pemikiran logis; orang-orang yang
dapat menggabungkan skema untuk membentuk suatu algoritma tetapi kesulitan dengan pemikiran tingkat abstrak; dan orang-orang yang mampu
untuk berpikir secara abstrak tanpa mencoba. [5]

## Referensi
[1] Reza Maulana. 2016, "ANALISA PERBANDINGAN KOMPLEKSITAS ALGORITMA SELECTIONSORT DAN INSERTION SORT", Jakarta Pusat; STMIK Nusa Mandiri Jakarta.

[2] Ramadhan Nasution, Andrian Syahputra, Azhar Widiyanto, Dicky Subuhanto, Ahmad Yusuf Abdillah. 2023, "Persepsi Mahasiswa Informatika Terhadap Keefektifan Algoritma Bubble Sort dalam Mengurutkan Data", Universitas Potensi Utama Medan Indonesia; BLEND SAINS JURNAL TEKNIK.

[3] Ashish V. Naik, Kenneth W. Regan. D. Sivakumar. 1995, "On quasilinear-time complexity theory",University of New York at Buffalo; Elsevier.

[4] Rinaldi Munir, "Kompleksitas Algoritma", STEI-ITB;Bandung

[5] Suparat Chuechote, Artorn Nokkaew, Apichat Phongsasithorn, Parames Laosinchai. 2020, "A Neo-Piagetian Analysis of Algorithmic Thinking Development through
the “Sorted” Digital Game", Thailand; CONTEMPORARY EDUCATIONAL TECHNOLOGY.