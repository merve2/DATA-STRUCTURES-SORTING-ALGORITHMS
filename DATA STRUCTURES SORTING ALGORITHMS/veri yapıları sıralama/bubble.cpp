#include <iostream>

// Swap fonksiyonu: iki elemanýn yerini deðiþtirir
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Bubble Sort algoritmasý
void bubbleSort(int arr[], int n) {
    // Her geçiþte en büyük elemaný sona doðru ittir
    for (int i = 0; i < n - 1; i++) {
        // Döngü her geçiþte bir eleman daha az kontrol eder, çünkü en büyük eleman zaten sona yerleþmiþtir
        for (int j = 0; j < n - i - 1; j++) {
            // Þu anki eleman, bir sonraki elemandan büyükse, yer deðiþtir
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // Sýralanacak dizi
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort'u uygula
    bubbleSort(arr, n);

    // Sýralanmýþ diziyi ekrana yazdýr
    std::cout << "Sýralanmýþ dizi: \n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
