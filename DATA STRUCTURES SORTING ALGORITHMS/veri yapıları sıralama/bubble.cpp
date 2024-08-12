#include <iostream>

// Swap fonksiyonu: iki eleman�n yerini de�i�tirir
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Bubble Sort algoritmas�
void bubbleSort(int arr[], int n) {
    // Her ge�i�te en b�y�k eleman� sona do�ru ittir
    for (int i = 0; i < n - 1; i++) {
        // D�ng� her ge�i�te bir eleman daha az kontrol eder, ��nk� en b�y�k eleman zaten sona yerle�mi�tir
        for (int j = 0; j < n - i - 1; j++) {
            // �u anki eleman, bir sonraki elemandan b�y�kse, yer de�i�tir
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // S�ralanacak dizi
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort'u uygula
    bubbleSort(arr, n);

    // S�ralanm�� diziyi ekrana yazd�r
    std::cout << "S�ralanm�� dizi: \n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
