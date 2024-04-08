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