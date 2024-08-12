#include <iostream>

// Swap fonksiyonu: iki eleman�n yerini de�i�tirir
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition fonksiyonu: diziyi pivot eleman�na g�re b�ler ve pivot'un do�ru konumunu belirler
int partition(int arr[], int low, int high) {
    // Pivot olarak dizinin sonundaki eleman� se�
    int pivot = arr[high];

    // Index of the smaller element
    int i = (low - 1);

    // Diziyi tarayarak pivot'tan k���k elemanlar� sol tarafa, b�y�k olanlar� sa� tarafa yerle�tir
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Pivot'u do�ru konuma yerle�tir
    swap(arr[i + 1], arr[high]);

    // Pivot'un yeni konumu
    return (i + 1);
}

// Quick Sort algoritmas�
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Diziyi b�l ve pivot'u bul
        int pivotIndex = partition(arr, low, high);

        // Her iki par�ay� da ayr� ayr� s�rala
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    // S�ralanacak dizi
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Quick Sort'u uygula
    quickSort(arr, 0, n - 1);

    // S�ralanm�� diziyi ekrana yazd�r
    std::cout << "S�ralanm�� dizi: \n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
