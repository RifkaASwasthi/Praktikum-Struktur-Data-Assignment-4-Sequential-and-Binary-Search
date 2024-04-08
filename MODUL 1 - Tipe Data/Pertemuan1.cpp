#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    // Membuat vector
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Menentukan angka untuk dikalikan
    int multiplier = 2;

    // Menggunakan fungsi map untuk mengalikan setiap elemen dengan multiplier
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), std::bind(std::multiplies<int>(), std::placeholders::_1, multiplier));

    // Menampilkan hasil
    std::cout << "Hasil perkalian: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}